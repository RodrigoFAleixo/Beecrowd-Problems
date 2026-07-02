#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct Node{
    int value;
    Node *next;
    Node *prev;
};

void create_tree(Node* node1, vector<int> vetor){
    for (size_t i = 1; i < vetor.size(); i++)
    {
        int target = vetor[i];
        
        for (Node* it  = node1; node1;)
        {
            if (target < it->value)
            {   
                cout << "test";
                it = it ->prev;
                if (it == NULL)
                {
                    Node* new_node = (Node*)malloc(sizeof(Node));
                    it->prev = new_node;
                    it->prev->value = target;
                    break;
                }
                
            }else{
                cout << "test";
                it = it ->next;
                if (it == NULL)
                {   
                    Node* new_node = (Node*) malloc(sizeof(Node));
                    it->next = new_node;
                    it->next->value = target;
                    break;
                }
            }
            
        }      
        
    }
    
}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int loop;
    cin >> loop;
    vector<int> vetor;

    while(loop--){
        int loop2;
        cin >> loop2;
        while (loop2--)
        {   
            int val;
            cin >> val;
            vetor.push_back(val);
        }

        Node *node1 = (Node *) malloc(sizeof(node1));
        node1->value = vetor[0];
        create_tree(node1, vetor);
        
    }

    return 0;
}