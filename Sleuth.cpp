#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ' || s[i] == '?'){
            s.erase(i, 1);
            i--;
        }
    }
    for(int i = 0; i < s.size(); i++){

        s[i]=tolower(s[i]);

    }


    if(s[s.size()-1]=='a' || s[s.size()-1]=='e' || s[s.size()-1]=='i' || s[s.size()-1]=='o' || s[s.size()-1]=='u' || s[s.size()-1]=='y'){

        cout<<"YES"<<endl;
    }else{

       cout<<"NO"<<endl;
    }
    return 0;
}
