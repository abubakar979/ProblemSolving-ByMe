#include<bits/stdc++.h>

using namespace std;

int main(){
  string s,r;
  cin>>s;
  for(int i=0;i<s.size();i++){
      char c=s[i];
      c=tolower(c);
    if(c!='a' && c!='e' && c!='i' && c!='o' && c!='u' && c!='y'){

        r.push_back(c);
    }
  }

for(int i=0;i<r.size();i++){

    cout<<'.'<<r[i];
  }


  return 0;
}
