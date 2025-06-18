#include <bits/stdc++.h>
using namespace std;

int square_root(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        if (i*i <= n) ans = i;
        else break;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << square_root(n);
    return 0;
}