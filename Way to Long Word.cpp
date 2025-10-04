#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
while(t--){
     string s;
     cin>>s;
     if(s.size()<=10){
        cout<<s<<endl;
     }else{
       int p=s.size()-2;
       cout<<s[0]<<p<<s[s.size()-1]<<endl;

     }

    }

    return 0;
}
