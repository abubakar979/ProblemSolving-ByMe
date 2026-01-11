#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    map<int,int> chapter;

    for(int i = 1; i <= n; i++){
        int l, r;
        cin >> l >> r;
        chapter[i] = r;
    }

    int k;
    cin >> k;
    for(int i=1;i<=n;i++){
      if(k<=chapter[i]){
        k=(n-i)+1;
        break;

      }
    }
    cout<<k;

    return 0;
}
