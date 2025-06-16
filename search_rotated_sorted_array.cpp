#include <bits/stdc++.h>
using namespace std;

int search_rotated_sorted_array(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (arr[mid] == target) return mid;
        if (arr[low] <= arr[mid]){
            if (arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else low = mid + 1;
        }
        else {
            if (arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else high = mid - 1;
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
    int target;
    cin >> target;
    // call
    cout << search_rotated_sorted_array(arr, target);
    return 0;
}