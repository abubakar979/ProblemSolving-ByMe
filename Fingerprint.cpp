#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;

    vector<int> arr1(n);
    vector<int> arr2(r);

    for (int i = 0; i < n; i++) cin >> arr1[i];
    for (int i = 0; i < r; i++) cin >> arr2[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < r; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }

    return 0;
}

