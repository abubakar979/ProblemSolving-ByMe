#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin>>t;
  while(t--){
	int x,n;
	cin>>n>>x;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	sort(v.begin(),v.end());
	int un=unique(v.begin(),v.end())-v.begin();
	if(un>x){
	  cout<<"Average"<<endl;
	}else if(un==x){
	  cout<<"Good"<<endl;
	}else{
	  cout<<"Bad"<<endl;
	}
  }
 return 0;
}