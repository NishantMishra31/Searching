#include <bits/stdc++.h>
using namespace std;

double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size();
    int m = arr2.size();
    if (n > m) return findMedianSortedArrays(arr2, arr1);
    int low = 0, high = n;
    int total = n + m;
    int left = (total + 1) / 2;
    while (low <= high) {
        int mid1 = (low + high) / 2;
        int mid2 = left - mid1;
        int l1 = (mid1 > 0) ? arr1[mid1 - 1] : INT_MIN;
        int l2 = (mid2 > 0) ? arr2[mid2 - 1] : INT_MIN;
        int r1 = (mid1 < n) ? arr1[mid1] : INT_MAX;
        int r2 = (mid2 < m) ? arr2[mid2] : INT_MAX;
        if (l1 <= r2 && l2 <= r1) {
            if (total % 2 == 1) {
                return max(l1, l2);
            } else {
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            }
        } else if (l1 > r2) {
            high = mid1 - 1;
        } else {
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
    // call
    cout << findMedianSortedArrays(arr1, arr2);
    return 0;
}
