#include<bits/stdc++.h>

using namespace std;

int main(){
  int k,n,w;
  cin>>k>>n>>w;
  int r=0;

  for(int i=1;i<=w;i++){
    r=r+(k*i);

  }
  if(r>n){
    cout<<r-n;
  }else{
    cout<<0;
  }


  return 0;
}
