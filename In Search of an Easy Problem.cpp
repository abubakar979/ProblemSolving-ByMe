
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> decision(n);

    for (int i = 0; i < n; i++) {
        cin >> decision[i];
    }

    bool hard = false;
    for (int i = 0; i < n; i++) {
        if (decision[i] == 1) {
            hard = true;
            break;
        }
    }

    if (hard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
