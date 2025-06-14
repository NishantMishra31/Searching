#include <bits/stdc++.h>
using namespace std;

int lowerbound(vector <int> &arr, int target){
    int ans = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
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
    cout << lowerbound(arr, 10);
    return 0;
}