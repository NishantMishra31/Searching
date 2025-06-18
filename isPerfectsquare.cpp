#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
    if (num < 1) return false;
    int low = 1, high = num;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;
        if (square == num) return true;
        else if (square < num) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    cout << (isPerfectSquare(n) ? "true" : "false");
    return 0;
}