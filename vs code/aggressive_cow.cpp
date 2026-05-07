#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool isPossible(vector<int>& arr, int mid, int n, int TotalC) {
    int cow = 1;
    int initialpos = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] - initialpos >= mid) {
            cow++;
            initialpos = arr[i];
        }

        if(cow >= TotalC)
            return true;
    }

    return false;
}

int main() {

    vector<int> arr{1,2,8,4,9};

    sort(arr.begin(), arr.end());

    int ans = -1;

    int st = 1;
    int e = arr[arr.size()-1] - arr[0];

    while(st <= e) {

        int mid = st + (e - st) / 2;

        if(isPossible(arr, mid, arr.size(), 3)) {
            ans = mid;
            st = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }

    cout << ans;

    return 0;
}