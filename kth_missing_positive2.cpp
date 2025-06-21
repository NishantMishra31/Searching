#include<bits/stdc++.h>
using namespace std;

// this code will fail some edge cases like [1, 2] and k = 1

int findMissing(vector <int> &arr, int k){
    int n = arr.size();
    int low = 0, high = n - 1, mid, missing;
    while (low <= high){
        mid = low +(high - low) / 2;
        missing = arr[mid] - (mid + 1);
        if (missing < k) low = mid + 1;
        else high = mid - 1;
    }
    return low + k;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // call
    cout << findMissing(arr, k);
    return 0;
}