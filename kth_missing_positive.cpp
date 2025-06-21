#include<bits/stdc++.h>
using namespace std;

// this code will fail some edge cases like [1, 2] and k = 1

int findMissing(vector <int> &arr, int k){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        if(arr[i] < k){
            k++;
        }
    }
    return k;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // call
    cout << findMissing(arr, k);
    return 0;
}