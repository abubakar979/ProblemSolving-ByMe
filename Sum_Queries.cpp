#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> arr(n+1);

    for(int i=1;i<=n;i++)cin>>arr[i];

    while(q--){
        int a,b;
        long sum=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)sum+=arr[i];
        cout<<sum<<endl;
        sum=0;

    }
}



