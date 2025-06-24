#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> mat, int k){
    int m = mat.size();
    int n = mat[0].size();
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if (mat[i][j] == k) return true;
        }
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