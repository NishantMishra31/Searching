#include <bits/stdc++.h>
using namespace std;

int findCeiling(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, ans = -1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= target){
            high = mid - 1;
            ans = arr[mid];
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
    cout << findCeiling(arr, target);
    return 0;
}