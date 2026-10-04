#include<iostream>
#include<vector>
using namespace std;

bool sumsubsequence(vector<int> arr, int target, int sum, int n, int i) {

    if(sum == target) {
        return true;
    }

    if(i == n) {
        return false;
    }

    // TAKE
    if(sumsubsequence(arr, target, sum + arr[i], n, i + 1)) {
        return true;
    }

    // NOT TAKE
    if(sumsubsequence(arr, target, sum, n, i + 1)) {
        return true;
    }

    return false;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    bool ans = sumsubsequence(arr, target, 0, n, 0);

    cout << ans;

    return 0;
}