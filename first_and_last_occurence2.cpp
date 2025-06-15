#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, ans = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= target){
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }
    return ans;
}

int upperbound(vector <int> &arr, int target){
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

vector <int> searchRange(vector <int> &arr, int target){
    int n = arr.size();
    int lb = lowerbound(arr, target);
    int ub = upperbound(arr, target);
    if (lb == n || arr[lb] != target ) return {-1, -1};
    return {lb, ub - 1};
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    // call
    vector <int> ans = searchRange(arr, target);
    for (auto it : ans){
        cout << it << " ";
    }
    return 0;
}