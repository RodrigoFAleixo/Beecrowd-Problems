#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

void solve(string str){
    istringstream iss(str);
    vector<string> words;
    string token;

    while (iss >> token)
    {
        words.push_back(token);
    }
    
    size_t maior = 0;
    size_t indice= -1;
    
    while(words.size() > 0){
        maior = 0;
        for (size_t j = 0; j < words.size(); j++)
        {
            if (maior < words[j].size())
            {
                indice = j;
                maior = words[j].size();
            }
            
        }
        cout << words[indice];
        if (words.size()> 1)
        {
            cout << " ";
        }
        
        words.erase(words.begin() + indice);
    }
    
    cout << "\n";

}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int loop;
    string str;
    
    cin >> loop;
    cin.ignore();

    while(loop--){
        getline(cin, str);
        solve(str);
    }

    return 0;
}