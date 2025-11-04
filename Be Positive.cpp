#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, z = 0, no = 0;
        cin >> n;

        vector<int> element(n);

        for (int i = 0; i < n; i++) {
            cin >> element[i];
            if (element[i] < 0) {
                no++;
            } else if (element[i] == 0) {
                z++;
            }
        }

        if(no%2==1){
           z=z+2;

         }
         cout<<z<<endl;
    }
    return 0;
}

