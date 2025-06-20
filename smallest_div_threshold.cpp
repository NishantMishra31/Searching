#include<bits/stdc++.h>
using namespace std;

int computeSum(vector <int> &arr, int divisor){
    int n = arr.size();
    int total = 0;
    for (int i = 0; i < n; i++){
        total += (arr[i] + divisor - 1) / divisor;
    }
    return total;
}

int smallestDivisor(vector <int> &arr, int threshold){
    int n = arr.size();
    int low = 1, high = *max_element(arr.begin(), arr.end());
    int ans = high;
    while (low <= high){
        int mid = low + (high - low) / 2;
        int sum = computeSum(arr, mid);
        if (sum <= threshold){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int threshold;
    cin >> threshold;
    // call
    cout << smallestDivisor(arr, threshold);
    return 0;
}