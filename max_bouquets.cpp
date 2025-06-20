#include <bits/stdc++.h>
using namespace std;

// this code will fail large testcases

bool possible(vector <int> &bloomDay, int day, int m, int k){
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
    return no_of_bouques >= m;
}

int minDays(vector <int> &bloomDay, int m, int k){
    int n = bloomDay.size();
    if (m * k > n) return -1;
    int mini =*min_element(bloomDay.begin(), bloomDay.end());
    int maxi =*max_element(bloomDay.begin(), bloomDay.end());
    for (int i = mini; i <= maxi; i++){
        if (possible(bloomDay, i, m, k) == true){
            return i;
        }
    }
    return -1;
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