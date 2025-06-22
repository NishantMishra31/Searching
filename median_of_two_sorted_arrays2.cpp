#include <bits/stdc++.h>
using namespace std;

double median(vector <int> &arr1, vector <int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    vector <int> arr3;
    while (i < n && j < m){
        if (arr1[i] <= arr2[j]) arr3.push_back(arr1[i++]);
        else arr3.push_back(arr2[j++]);
        }
    while (i < n) arr3.push_back(arr1[i++]);
    while (j < m) arr3.push_back(arr2[j++]);
    int z = arr3.size();
    if (z % 2 == 0) return ((double)arr3[z / 2 - 1] + (double)arr3[z / 2]) / 2;
    else return arr3[z / 2];
    return 0;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> arr1(n);
    vector <int> arr2(m);
    for (int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    // call
    cout << median(arr1, arr2);
    return 0;
}