#include <bits/stdc++.h>
using namespace std;

int firstOccurence(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, first = -1, mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (arr[mid] == target){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return first;
}

int lastOccurence(vector <int> &arr, int target){
    int n = arr.size();
    int low = 0, high = n - 1, last = -1, mid;
    while (low <= high){
        mid = low + (high - low) / 2;
        if (arr[mid] == target){
            last = mid;
            low = mid + 1;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return last;
}

vector <int> searchRange(vector <int> &arr, int target){
    int first = firstOccurence(arr, target);
    if (first == -1) return {-1, -1};
    int last = lastOccurence(arr, target);
    return {first, last};
}

int countOccurences(vector <int> &arr, int target){
    int first = firstOccurence(arr, target);
    if (first == -1) return 0;
    int last = lastOccurence(arr, target);
    return last - first + 1;
    
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cin >> target;
    // call
    cout << countOccurences(arr, target);
    return 0;
}