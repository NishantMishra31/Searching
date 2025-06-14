#include<bits/stdc++.h>
using namespace std;

int recursive_bs(vector<int> &arr, int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] < target){
        return recursive_bs(arr, mid + 1, high, target);
    }
    else {
        return recursive_bs(arr, low, mid - 1, target);
    }
}

int binary_search(vector<int> &arr, int target){
    return recursive_bs(arr, 0, arr.size() - 1, target);
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result  = binary_search(arr,target);
    cout << result;
    return 0;
}
