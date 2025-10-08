#include<bits/stdc++.h>

using namespace std;

int main(){
 int n,o=0,z=0;
 cin>>n;
 string s;
 cin>>s;
 for(int i=0;i<n;i++){

        if(s[i] == 'n') o++;
        if(s[i] == 'z') z++;
 }
   for (int i = 0; i < o; i++) cout << "1 ";
   for (int i = 0; i < z; i++) cout << "0 ";

 return 0;
}
