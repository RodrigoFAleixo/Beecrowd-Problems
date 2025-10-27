#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

void solve(vector<string> str){

    sort(str.begin(), str.end(), [](string &str1, string &str2){
        return str1.size() > str2.size();
    });
    for (size_t i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
    }
    cout << "\n";
}

int main(int argc, char * argv[]){

    // ios::sync_with_stdio(0) // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    // cin.tie(nullptr); // Desvincula o cin do cout

    int loop;
    string str, token;
    vector<string> words = {};
    
    cin >> loop;
    cin.ignore(); 

    while(loop--){
        words = {};
        
        getline(cin, str);
        istringstream iss(str);
        while (iss >> token)
        {
            words.push_back(token);
        }
        
        
        solve(words);
    }

    return 0;
}