#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> mat, int k){
    int m = mat.size();
    int n = mat[0].size();
    int low = 0, high = m * n - 1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        int row = mid / n, col = mid % n;
        if (mat[row][col] == k) return true;
        else if (mat[row][col] < k) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int k;
    cin >> k;
    //call
    cout << search(mat, k);
    return 0;
}