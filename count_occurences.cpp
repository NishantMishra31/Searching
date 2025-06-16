#include <bits/stdc++.h>
using namespace std;

vector <int> countOccurences(vector <int> &arr, int target){
    int n = arr.size();
    
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
    vector <int> ans = countOccurences(arr, target);
    for (auto it : ans){
        cout << it << " ";
    }
    return 0;
}