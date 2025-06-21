#include<bits/stdc++.h>
using namespace std;

// this is cleaner and uses binary search to reduce the TC

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
    while (maxWeight <= totalWeight){
        int mid = maxWeight + (totalWeight - maxWeight) / 2;
        int daysReq = daysRequired(weights, mid);
        if (daysReq <= days) totalWeight = mid - 1;
        else maxWeight = mid + 1;
    }
    return maxWeight;
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