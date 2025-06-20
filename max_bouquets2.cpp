#include <bits/stdc++.h>
using namespace std;

int possible(vector <int> &bloomDay, int day, int m, int k){
    int n = bloomDay.size();
    int cnt = 0, no_of_bouques = 0;
    for (int i = 0; i < n; i++){
        if (bloomDay[i] <= day){
            cnt ++;
            if (cnt == k){
                no_of_bouques ++;
                cnt = 0;
            }
        }
        else cnt = 0;
    }
    return no_of_bouques;
}

int minDays(vector <int> &bloomDay, int m, int k){
    int n = bloomDay.size();
    if (1LL * m * k > n) return -1;
    int ans = -1;
    int low =*min_element(bloomDay.begin(), bloomDay.end());
    int high =*max_element(bloomDay.begin(), bloomDay.end());
    while (low <= high){
        int mid = low +(high - low) / 2;
        if (possible(bloomDay, mid, m, k) >= m){
            ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return ans;
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