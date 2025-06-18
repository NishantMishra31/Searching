#include <bits/stdc++.h>
using namespace std;

/* this code may run into overflow
beyond long long values due to exponential computing*/

long long nth_power(long long mid, long long n){
    long long ans = 1;
    while (n > 0){
        if (n % 2 == 1){
            if (ans > LLONG_MAX / mid) return LLONG_MAX;
            ans = ans * mid;
            n -= 1;
        }
        else{
            if (mid > LLONG_MAX / mid) return LLONG_MAX;
            mid = mid * mid;
            n = n / 2;
        }
    }
    return ans;
}

long long isRoot(long long n , long long m) {
    if (m < 1) return -1;
    long long low = 1, high = m;
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
    long long n, m;
    cin >> n >> m;
    cout << isRoot(n, m);
    return 0;
}