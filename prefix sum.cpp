#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<long> element(n+1),prefix(n+1,0);

    for(int i=1;i<=n;i++)cin>>element[i];
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+ element[i];
    }

    while(q--){
        int a,b;
        cin>>a>>b;
        cout<<prefix[b]-prefix[a-1]<<endl;
    }
}
