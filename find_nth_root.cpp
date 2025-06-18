#include <bits/stdc++.h>
using namespace std;

bool isRoot(int n , int m) {
    if (m < 1) return false;
    int low = 1, high = m;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long power = round(pow(mid, n));
        if (power == m) return true;
        else if (power < m) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main(){
    int n, m;
    cin >> n >> m;
    cout << (isRoot(n, m) ? "true" : "false");
    return 0;
}