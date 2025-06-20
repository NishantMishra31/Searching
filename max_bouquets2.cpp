#include <bits/stdc++.h>
using namespace std;

int minDays(vector <int> &bloomDay, int m, int k){
    int n = bloomDay.size();
    if (m * k < n) return -1;
    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    while (low<=high){
        int mid = low + (high - low) / 2;
        

    }
}


int main(){
    int n;
    cin >> n;
    vector <int> bloomDay(n);
    for (int i = 0; i < n; i++){
        cin >> bloomDay[i];
    }
    int bouquets, flowers;
    cin >> bouquets >> flowers;
    //call
    cout << minDays(bloomDay, bouquets, flowers);
    return 0;
}