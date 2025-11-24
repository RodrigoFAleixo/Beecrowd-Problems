#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
    cin.tie(nullptr);
    // ios::sync_with_stdio(0);

    int v, a;
    
    cin >> v >> a;

    vector<vector<int>> arestas;
    arestas.resize(a);

    for (size_t i = 0; i < arestas.size(); i++)
    {
        int v1, v2, peso;
        cin >> v1 >> v2 >> peso;
        arestas[i].resize(3);

        arestas[i][0] = v1;
        arestas[i][1] = v2;
        arestas[i][2] = peso;
        
    }
    
    sort(arestas.begin(), arestas.end(), [](vector<int> &a, vector<int> &b){
        return a[2] < b[2];
    });  

    
    unordered_set<int, hash<int>> X;
    int value = 0;
    
    for (int i = 0; i < a; i++)
    {
        
        if((X.find(arestas[i][0]) == X.end()) | (X.find(arestas[i][0]) == X.end())){
            if(X.find(arestas[i][0]) == X.end()) {
                X.insert(arestas[i][0]);
                cout << "Vertice Inserido: " << arestas[i][0] << "\n";
            }
                
            
            if(X.find(arestas[i][1]) == X.end()){
                X.insert(arestas[i][1]);
                cout << "Vertice Inserido: " << arestas[i][1] << "\n";
            }

            value += arestas[i][2];
            cout << value << " " << arestas[i][2] << "\n";
        }

        
    }
    
    

    return 0;
}