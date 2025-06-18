#include <bits/stdc++.h>
using namespace std;

long long nth_power(int mid, int n){
    long long ans = 1;
    while (n > 0){
        if (n % 2 == 1){
            ans = ans * mid;
            n -= 1;
        }
        else{
            mid = mid * mid;
            n = n / 2;
        }
    }
    return ans;
}

int isRoot(int n , int m) {
    if (m < 1) return false;
    int low = 1, high = m / 2;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long power = nth_power(mid, n);
        if (power == m) return mid;
        else if (power < m) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << isRoot(n, m);
    return 0;
}