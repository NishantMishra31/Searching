#include <bits/stdc++.h>
using namespace std;

int canPlace(vector<int>& arr, int n , int m, int x){
    int last=arr[0];
    int ballPlaced=1;
    for(int i = 1; i < n && ballPlaced < m; i++){
        int curr=arr[i];
        if(curr - last >= x){
            ballPlaced+=1;
            last=curr;
        }
    }
    return ballPlaced == m; 
}

int maxDistance(vector<int>& arr, int m) {
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int ans=-1;
    int low = 0;
    int high= ceil(arr[n - 1] / (m - 1.0));
    while(low <= high){
        int mid=low + (high - low)/2;
        if(canPlace(arr,n,m,mid)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    // call
    cout << maxDistance(arr, m);
    return 0;
}