#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0, r = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int half = sum / 2;
    int i = n - 1;
    vector<int> res;

    while (r <= half && i >= 0) {
        r += arr[i];
        res.push_back(arr[i]);
        i--;
    }

    cout << res.size();
    return 0;
}
