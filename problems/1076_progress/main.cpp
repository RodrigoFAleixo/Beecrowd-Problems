#include <iostream>
#include <list>
#include <vector>


using namespace std;

void solve(vector<list<int>> adjacency, int start, int& cont){
    
    for(int i = 0; i < adjacency[start].size(); i++){
        cont++; 
    }
}

void recursivity(int index){

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    vector<list<int>> adjacency;
    
    int loop;
    int start, temp_node1, temp_node2, vertices, arestas;
    cin >> loop;

    while (loop--)
    {
        adjacency.clear();
    

        cin >> start;
        cin >> vertices >> arestas;

        adjacency.resize(vertices);
        
        for(int i = 0; i < arestas; i++){
            cin >> temp_node1 >> temp_node2;

            if (temp_node1 < temp_node2)
            {
                int aux = temp_node1;
                temp_node1 = temp_node2;
                temp_node2 = aux;
            }

            bool exist;
            for(auto& num : adjacency[temp_node1]){
                if (num == temp_node2)
                {
                    exist = true;
                }
                
            }

            if (!exist)
            {
                adjacency[temp_node1].push_back(temp_node2);
            }
            
            
            
            adjacency[temp_node1].push_back(temp_node2);
        }

        int cont = 0;
        solve(adjacency, start, cont);

    }
    

    return 0;
}