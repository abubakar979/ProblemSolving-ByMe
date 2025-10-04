#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n;
    vector<int> element(n),prefix(n,0);

    for(int i=0;i<n;i++)cin>>element[i];
    prefix[0]=element[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+ element[i];
    }
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        if(a==0){
            cout<<prefix[b]<<endl;
        }else{


           cout<<prefix[b]-prefix[a-1]<<endl;
        }
    }
}
