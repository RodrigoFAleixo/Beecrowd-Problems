#include <iostream>
#include <list>
#include <vector>


using namespace std;

void solve(vector<pair<vector<int>, int>>& adjacency_list, int start, int& counter){
    if (adjacency_list[start].second < 1)
    {
        adjacency_list[start].second = 1;
        for (size_t i = 0; i < adjacency_list[start].first.size(); i++)
        {
            /* code */
        }
        
    }
    
    
    adjacency_list[start].second = 2;
}

int main(){

    /*in a adjacency list, we need to know the v what point, and check if the v alredy checks*/
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    // v what points ; check if alredy pass into this vertex
    vector<pair<vector<int>, int>> adjacency_list;
    int loop, start, temp_node1, temp_node2, v, a;

    cin >> loop;

    while(loop--){
        
        cin >> start;
        cin >> v >> a;

        adjacency_list.resize(v);
        for(int i = 0; i < a; i++){
            cin >> temp_node1 >> temp_node2;
            if(temp_node1 < temp_node2){
                int aux = temp_node1;
                temp_node1 = temp_node2;
                temp_node2 = aux;
            } 

            bool is_in;
            for (size_t j = 0; j < adjacency_list[temp_node1].first.size(); j++)
            {
                if(temp_node2 == adjacency_list[temp_node1].first[j]){
                    is_in = true;
                }
            }
            
            if(!is_in) adjacency_list[temp_node1].first.push_back(temp_node2);
        }

        adjacency_list.clear();

    }

    
    

    return 0;
}