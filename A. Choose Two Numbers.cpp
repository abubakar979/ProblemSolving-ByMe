#include<bits/stdc++.h>
using namespace std;

bool exists(vector<int>& v, int x){
    for(int i = 0; i < v.size(); i++){
        if(v[i] == x){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<int> B(m);
    for(int i = 0; i < m; i++){
        cin >> B[i];
    }


    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            int sum = A[i] + B[j];


            if(!exists(A, sum) && !exists(B, sum)){
                cout << A[i] << " " << B[j] << endl;
                return 0;
            }
        }
    }

    return 0;
}
