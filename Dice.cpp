#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int p1 = 0, draw = 0, p2 = 0;

    for (int dice = 1; dice <= 6; dice++) {
        int diff1 = abs(a - dice);
        int diff2 = abs(b - dice);

        if (diff1 < diff2) p1++;
        else if (diff1 > diff2) p2++;
        else draw++;
    }

    cout << p1 << " " << draw << " " << p2 << endl;
    return 0;
}
