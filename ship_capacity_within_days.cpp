#include<bits/stdc++.h>
using namespace std;

// this approach uses linear search which will run out of time for large sized inputs

int daysRequired(vector <int> weights, int capacity){
    int n = weights.size();
    int days = 1, load = 0;
    for (int i = 0; i < n; i++){
        if (load + weights[i] > capacity){
            days++;
            load = weights[i];
        }
        else load += weights[i];
    }
    return days;
}

int shipWithinDays(vector<int> &weights, int days){
    int maxWeight = *max_element(weights.begin(), weights.end());
    int totalWeight = accumulate(weights.begin(), weights.end(), 0);
    for (int cap = maxWeight; cap <= totalWeight; cap++){
        int daysReq = daysRequired(weights, cap);
        if (daysReq <= days) return cap;
    }
    return totalWeight;
}

int main(){
    int n;
    cin >> n;
    vector <int> weights(n);
    for (int i = 0; i < n; i++){
        cin >> weights[i];
    }
    int days;
    cin >> days;
    // call
    cout << shipWithinDays(weights, days);
    return 0;
}