#include <bits/stdc++.h>
using namespace std;

// this approach is optimal and uses binary search adaptation

int countLessEqual(const vector<int>& row, int target) {
    return upper_bound(row.begin(), row.end(), target) - row.begin();
}

int findMedian(vector<vector<int>> &mat) {
    int m = mat.size();
    int n = mat[0].size();
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < m; i++) {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][n - 1]);
    }
    int desired = (m * n + 1) / 2;
    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = 0;
        for (int i = 0; i < m; i++) {
            count += countLessEqual(mat[i], mid);
        }
        if (count < desired)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    //call
    cout << findMedian(mat);
    return 0;
}
