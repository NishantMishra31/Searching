#include<bits/stdc++.h>
using namespace std;

bool bs(vector<int> mat, int k){
    int x = mat.size();
    int low = 0, high = x - 1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (mat[mid] == k) return true;
        else if(mat[mid] < k){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return false;
}

bool search(vector<vector<int>> mat, int k){
    int m = mat.size();
    int n = mat[0].size();
    int index = -1, max_count = 0;
    for(int i = 0; i < m; i++){
        if(mat[i][0] <= k && k <= mat[i][n-1]){
            return bs(mat[i], k);
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