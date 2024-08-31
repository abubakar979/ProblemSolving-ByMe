#include<bits/stdc++.h>

using namespace std;
bool canMakeArithmeticProgression(vector<int>& arr){
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(d!=arr[i]-arr[i-1]){
                return false;
            }
        }
        return true;
}
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<v.size();i++)cin>>v[i];
   if(canMakeArithmeticProgression(v)){
      cout<<"True";
   }else{
    cout<<"False";
   }
    return 0;
}