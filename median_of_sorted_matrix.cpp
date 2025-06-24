#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> &mat, int k){
    int m = mat.size();
    int n = mat[0].size();
    vector <int> arr;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr.push_back(mat[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
    return arr[(m * n) / 2];
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
    cout << median(mat, k);
    return 0;
}