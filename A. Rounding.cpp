#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = n % 10;

    if (r == 0) {
        cout << n << endl;
    }
    else if (r < 5) {
        cout << n - r << endl;
    }
    else if (r > 5) {
        cout << n + (10 - r) << endl;
    }
    else {
        cout << n - 5 << endl;
    }

    return 0;
}
