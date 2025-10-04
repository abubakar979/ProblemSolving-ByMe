#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  int r=0;
  while(t--){

   int a,b,c;
   cin>>a>>b>>c;
   int sum=a+b+c;
   if(sum>=2){
    r++;
    sum=0;
   }

  }
cout<<r<<endl;

    return 0;
}
