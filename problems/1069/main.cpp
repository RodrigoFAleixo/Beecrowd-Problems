#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void diamonds_enconter(int &cont, string str){
    for (int i = 0; i < (int)str.size()-1; i++)
    {    
        if (str[i] == '<' && str[i+1] == '>')
        {   
        
            cont++;
            str.erase(str.begin()+i, str.begin()+(i+2));
            diamonds_enconter(cont, str);
            return;
        }
        
    }
    return;
}

void solve(string str){

    string clean_str = "";
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '<' || str[i] == '>')
        {
            clean_str.push_back(str[i]);
        }
        
    }

    int cont = 0;
    diamonds_enconter(cont, clean_str);
    cout << cont << "\n";
}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout
    
    int num = 0;
    string str;
    cin >> num;

    while(num--)
    {   
        cin >> str;
        solve(str);
    }
    

    return 0;
}