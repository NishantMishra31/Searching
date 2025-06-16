#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector<int>&nums,int target){
    int low=0,high=nums.size();
    while(low<high){
        int mid=low+(high-low)/2;
        if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid;
        }
    }
    return low;
}
    vector<int> searchRange(vector<int>&nums, int target) {
        int first=lowerbound(nums,target);
        int second=lowerbound(nums,target+1)-1;
        if(first<=second && first<nums.size() && nums[first]==target){
            return{first,second};
        }
    return{-1,-1};
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