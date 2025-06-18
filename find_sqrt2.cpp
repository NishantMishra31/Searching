#include <bits/stdc++.h>
using namespace std;

int square_root(int n){
    if (n == 0 || n == 1) return n;
    int low  = 1, high = n/2;
    long long mid;
    while(low <= high){
        mid = low + (high - low) / 2;
        if (mid * mid <= n){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return high;
}

int main(){
    int n;
    cin >> n;
    cout << square_root(n);
    return 0;
}