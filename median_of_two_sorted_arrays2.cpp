#include <bits/stdc++.h>
using namespace std;

// this approach limits the extra space usage and takes an count variable to track the elements indices

double findMedianSortedArrays(vector <int> &arr1, vector <int> &arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;
    int z = n + m, cnt = 0;
    int ind2 = z / 2;
    int ind1 = ind2 - 1;
    int element1 = -1, element2 = -1;
    while ( i < n && j < m){
        if (arr1[i] < arr2[j]){
            if(cnt == ind1) element1 = arr1[i];
            if(cnt == ind2) element2 = arr1[i];
            cnt++;
            i++;
        }
        else {
            if(cnt == ind1) element1 = arr2[j];
            if(cnt == ind2) element2 = arr2[j];
            cnt++;
            j++;
        }
    }
    while (i < n){
        if(cnt == ind1) element1 = arr1[i];
        if(cnt == ind2) element2 = arr1[i];
        cnt++;
        i++;
    }
    while (j < m){
        if(cnt == ind1) element1 = arr2[j];
        if(cnt == ind2) element2 = arr2[j];
        cnt++;
        j++;
    }
    if (z % 2 == 0) return ((double)(element1 + element2) / 2);
    else return element2;
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
    cout << findMedianSortedArrays(arr1, arr2);
    return 0;
}