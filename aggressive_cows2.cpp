#include <bits/stdc++.h>
using namespace std;

//aggressive cows

bool isPlaced(vector <int> &arr, int dist, int cows){
    int n = arr.size();
    int cntCows = 1, last = arr[0];
    for(int i = 1; i < n; i++){
        if (arr[i] - last >= dist){
            cntCows ++;
            last = arr[i];
            if (cntCows >= cows) return true;
        }
    }
    return false;
}

int placingCows(vector <int> &arr, int cows){
    int n = arr.size(), ans = 0;
    sort(arr.begin(), arr.end());
    int low = 1, high = arr.back() - arr[0], mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (isPlaced(arr, mid, cows)){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cows;
    cin >> cows;
    // call
    cout << placingCows(arr, cows);
    return 0;
}