#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        if(n%3==0){
            cout<<0<<endl;
        }
        int r=0;
        while(n%3!=0){
            n=n+1;
            r=r+1;
        }
        if(r!=0){
            cout<<r<<endl;
        }

        r=0;
     }

    return 0;
}
