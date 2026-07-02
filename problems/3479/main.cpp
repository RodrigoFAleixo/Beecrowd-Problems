#include <bits/stdc++.h>

using namespace std;

int main(){

    string vetor[] = {"aquario", "peixes", "aries", "touro", "gemeos", "cancer", "leao", "virgem", "libra", "escorpiao", "sargitario", "capricornio"};
    
    


    string str;

    getline(cin, str);

    int pos = str.find("/");

    int dia = stoi(str.substr(0, pos));
    int mes = stoi(str.substr(pos + 1));

    cout << "Dia: " << dia << "\n" << "Mes: "<< mes << "\n";

    
    return 0;
}