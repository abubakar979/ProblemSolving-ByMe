#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;
  int r=0;

  vector<int> s(n);

  for(int i=0;i<n;i++){

    cin>>s[i];
  }

  for(int j=0;j<n;j++){
    if(s[j]>=s[k-1] && s[j]!=0){
        r++;

    }

  }
  cout<<r<<endl;
  r=0;


    return 0;
}
