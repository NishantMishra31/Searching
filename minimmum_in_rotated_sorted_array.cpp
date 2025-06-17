#include<bits/stdc++.h>
using namespace std;

int minimmum_in_rotated_sorted_array(vector <int> &arr){
    int n = arr.size();
    int low = 0, high = n - 1, mid, ans = INT_MAX;
    while(low <= high){
        if (arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
        }
        mid = low + (high - low) / 2;
        if (arr[low] <= arr[mid]){
            ans = min(arr[low], ans);
            low = mid + 1;
        }
        else{
            ans = min(arr[mid], ans);
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i  = 0; i < n; i++){
        cin >> arr[i];
    }
    // call
    cout << minimmum_in_rotated_sorted_array(arr);
    return 0;
}