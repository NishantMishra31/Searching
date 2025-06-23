#include<bits/stdc++.h>
using namespace std;

int row(vector<vector<int>> mat){
    int m = mat.size();
    int n = mat[0].size();
    int index = -1, max_count = 0, cnt = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cnt += mat[i][j];
        }
        if (cnt > max_count){
            cnt = max_count;
            index = i;
        }
    }
    return index;
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
    //call
    cout << row(mat);
    return 0;
}