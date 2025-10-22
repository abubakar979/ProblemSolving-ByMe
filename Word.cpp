#include<bits/stdc++.h>

using namespace std;

int main(){
string s,r;
cin>>s;
int up=0,low=0;

for(int i=0;i<s.size();i++){
    if(islower(s[i])){
        low++;
    }else{
      up++;

    }
}

if(low>=up){
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);

    }

} else{


    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);

    }
}


    cout<<s;

 return 0;
}
