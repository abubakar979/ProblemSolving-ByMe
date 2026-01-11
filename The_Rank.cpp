#include<bits/stdc++.h>

using namespace std;

int main(){
 int t,sum=0,r=1;
 cin>>t;
 while(t--){
  int score;
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  score=a+b+c+d;
  if(sum==0){
    sum=score;
  }
  if(score>sum){

    r=r+1;
  }


 }
  cout<<r<<endl;
 return 0;
}
