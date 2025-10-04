#include<bits/stdc++.h>

using namespace std;

int main(){
string s,r;

cin>>s;



for(int i=0;i<s.size();i++){
    char ch = tolower(s[i]);
    if( ch=='a' || ch=='e'|| ch=='o' || ch=='u' || ch=='i' || ch=='y'){
        continue;
    }

    r+='.';
    r+=ch;
}
cout<<r;

return 0;

}
