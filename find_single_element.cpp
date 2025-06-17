#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return nums[0];
    for (int i = 0; i < n; i++){
        if (i==0){
            if(nums[i] != nums[i+1]) return nums[i];
        }
        else if(i == n - 1){
            if (nums[i] != nums[i-1]) return nums[i];
        }
        else{
            if (nums[i-1] != nums[i] && nums[i] != nums[i+1]){
            return nums[i];
            }
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i  = 0; i < n; i++){
        cin >> arr[i];
    }
    // call
    cout << singleNonDuplicate(arr);
    return 0;
}