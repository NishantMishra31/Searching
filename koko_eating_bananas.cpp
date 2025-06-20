#include <bits/stdc++.h>
using namespace std;

int findMax(vector <int> &piles){
    int maxi = INT_MIN;
    int n = piles.size();
    for (int i = 0; i < n; i++){
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

long long calculatetotalHours(vector <int> &piles, int h){
    long long totalhours = 0;
    int n = piles.size();
    for(int i = 0; i < n; i++){
        totalhours += (piles[i] + h - 1) / h;
    }
    return totalhours;
}

long long minEatingSpeed(vector<int>& piles, int hours) {
    int n = piles.size();
    long long low = 1, high = findMax(piles), mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        long long totalHours = calculatetotalHours(piles, mid);
        if (totalHours <= hours){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int hours;
    cin >> hours;
    //call
    cout << minEatingSpeed(arr, hours);
    return 0;
}