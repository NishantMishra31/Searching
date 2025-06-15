#include <bits/stdc++.h>
using namespace std;

vector <int> searchRange(vector <int> &arr, int target){
    int n = arr.size();
    int first = -1, last = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            if(first == -1) first = i;
            last = i;
        }
    }
    return {first, last};
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