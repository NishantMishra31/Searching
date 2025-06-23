#include <bits/stdc++.h>
using namespace std;

int kth_element(vector<int> &arr1, vector<int> &arr2, int k) {
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0, cnt = 0;

    while (i < n && j < m) {
        int val;
        if (arr1[i] < arr2[j]) val = arr1[i++];
        else val = arr2[j++];
        cnt++;
        if (cnt == k) return val;
    }

    while (i < n) {
        cnt++;
        if (cnt == k) return arr1[i];
        i++;
    }

    while (j < m) {
        cnt++;
        if (cnt == k) return arr2[j];
        j++;
    }
    return -1;
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
