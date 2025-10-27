#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>


using namespace std;

void solve(string str, unordered_map<int, int> my_hash){
    for (size_t i = 0; i < str.size(); i++)
    {
        if (my_hash.find((int)str[i]) == my_hash.end())
        {
            my_hash.insert({(int)str[i], 0 });
        }

        my_hash[(int)str[i]]++;
        
    }
    
    vector<pair<int, int>> order(my_hash.begin(), my_hash.end());

    sort(order.begin(), order.end(), [](const auto& v1, const auto& v2){
        if (v1.second == v2.second)
        {
            return v1.first > v2.first;
        }
        
        return v1.second < v2.second;
    });

    for(const auto& par : order){
        cout << par.first << " " << par.second << "\n";
    }

}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    string str;
    unordered_map<int, int> my_hash;
    
    bool first = true;
    while(cin >> str){
        my_hash.clear();
        
        if(!first) cout << "\n";
        first = false;
        solve(str, my_hash);
        
    }

    return 0;
}