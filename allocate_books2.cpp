#include<bits/stdc++.h>
using namespace std;

int holdingBooks(vector <int> &arr, int pages){
    int n = arr.size();
    int students = 1, pagesStudent = 0;
    for(int i = 0; i < n; i++){
        if (pagesStudent + arr[i] <= pages) pagesStudent += arr[i];
        else {
            students++;
            pagesStudent = arr[i];
        }
    }
    return students;
}

int allocate_books(vector <int> &arr, int k){
    int n = arr.size();
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (holdingBooks(arr, mid) <= k) low = mid + 1;
        else high = mid - 1;
    }
    return low;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    // call
    cout << allocate_books(arr, k);
    return 0;
}