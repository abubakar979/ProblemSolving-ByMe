#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    int sf = 0, fs = 0;

    for(int i = 0; i < n - 1; i++) {
        if(s[i] == 'S' && s[i+1] == 'F') sf++;
        if(s[i] == 'F' && s[i+1] == 'S') fs++;
    }

    if(sf > fs) cout << "YES";
    else cout << "NO";
}
