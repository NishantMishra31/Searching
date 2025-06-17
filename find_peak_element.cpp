#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if( (i == 0 || nums[i-1] < nums[i]) && (i == n - 1 || nums[i] > nums[i + 1])){
        return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    //call
    cout << findPeakElement(arr);
    return 0;
}