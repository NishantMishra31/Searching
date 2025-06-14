#include <bits/stdc++.h>
using namespace std;

int upperbound(vector <int> &arr, int target){
    int ans = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
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
    cout << upperbound(arr, target);
    return 0;
}