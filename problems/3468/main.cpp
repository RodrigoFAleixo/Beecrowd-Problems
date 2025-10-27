#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    string teste =  "TEST4";

    unordered_map<string, string> mp = {
        {"oposicao","mas"},
        {"contrariedade","mas"},
        {"quantidade","mais"},
        {"intensidade","mais"},
    };

    getline(cin, str);

    transform(
        str.begin(), str.end(),
        teste.begin(),
        [](unsigned char c){return tolower(c);}
    );

    // cout << mp[str] << "\n";

    cout << teste << "\n";



    return 0;
}