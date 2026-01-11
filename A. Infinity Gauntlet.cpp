#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> Gauntlet;

    Gauntlet["purple"] = "Power";
    Gauntlet["green"]  = "Time";
    Gauntlet["blue"]   = "Space";
    Gauntlet["orange"] = "Soul";
    Gauntlet["red"]    = "Reality";
    Gauntlet["yellow"] = "Mind";

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        Gauntlet.erase(tmp);
    }

    cout << Gauntlet.size() << endl;

    for(auto it : Gauntlet){
        cout << it.second << endl;
    }

    return 0;
}
