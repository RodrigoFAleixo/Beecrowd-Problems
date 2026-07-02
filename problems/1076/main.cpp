#include <iostream>
#include <list>
#include <vector>


using namespace std;

class Node
{
    private:
        
    public:
        int node;
        Node(int node) : node(node){}
         
        int visited = 0; // 0 not visited, 1 visited but not finished, 2 finished
};



void solve(){
    
    
}

void recursivity(int index){

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int loop;
    int start, num_vertices = 0, num_arestas, temp_node1, temp_node2;
    vector<vector<Node*>> adjacency_list; 
    cin >> loop;

    while (loop--)
    {
        adjacency_list.clear();
        cin >> start;
        cin >> num_vertices >> num_arestas;

        adjacency_list.resize(num_vertices);
        for (size_t i = 0; i < num_arestas; i++)
        {
            cin >> temp_node1 >> temp_node2;
            if (temp_node1 < temp_node2)
            {
                int aux = temp_node1;
                temp_node1 = temp_node2;
                temp_node2 = aux;
            }

            bool is_alredy_in;
            for (size_t j = 0; j < adjacency_list[temp_node1].size(); j++)
            {
                if (adjacency_list[temp_node1][j]->node == temp_node2)
                {
                    is_alredy_in = true;
                }
                
            }

            if (!is_alredy_in)
            {
                adjacency_list[temp_node1].push_back(new Node(temp_node2));
            }
            
            
        }
        

        
        

        solve();
        
        
        for (size_t j = 0; j < adjacency_list.size(); j++)
        {
            /* code */
        }
        

    }
    

    return 0;
}