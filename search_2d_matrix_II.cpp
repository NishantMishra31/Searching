#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &mat, int k){
    int row = 0;
    int col = mat[0].size() - 1;
    while (row < mat.size() && col >= 0){
        if (mat[row][col] == k) return true;
        else if (mat[row][col] > k) col --;
        else row ++;
    }
    return false;
}

int main(){
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> mat[i][j];
        }
    }
    int k;
    cin >> k;
    //call
    cout << searchMatrix(mat, k);
    return 0;
}