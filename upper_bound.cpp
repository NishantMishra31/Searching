#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, ans = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] > target){
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // call
    int target;
    cin >> target;
    cout << upper_bound(arr, target);
    return 0;
}