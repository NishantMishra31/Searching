#include <bits/stdc++.h>
using namespace std;

int kth_element(vector<int>& arr1, vector<int>& arr2, int k) {
    int n = arr1.size();
    int m = arr2.size();
    if (n > m) return kth_element(arr2, arr1, k);
    int low = max(k - m, 0), high = min(k , n);
    int total = n + m;
    int left = k;
    while (low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
        int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
        int r1 = (mid1 < n) ? arr1[mid1] : INT_MAX;
        int r2 = (mid2 < m) ? arr2[mid2] : INT_MAX;
        if (l1 <= r2 && l2 <= r1) {
            return max(l1, l2);
        } 
        else if (l1 > r2) {
            high = mid1 - 1;
        } 
        else {
            low = mid1 + 1;
        }
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < m; i++) cin >> arr2[i];
    int k;
    cin >> k;
    // call
    cout << kth_element(arr1, arr2, k);
    return 0;
}
