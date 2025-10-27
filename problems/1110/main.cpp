#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int num;
    
    cin >> num;
    while(num > 0)
    {
        queue<int> fila;
        int reamining_card = -1;
        vector<int> discarded_cards;

        for (int i = 1; i <= num; i++)
        {
            fila.push(i);  
        }
        
        
        while (!fila.empty())
        {
            // descarta a carta
            discarded_cards.push_back(fila.front());
            fila.pop();

            //insere no final
            fila.push(fila.front());
            fila.pop();

            //carta remanecente
            if (fila.size() == 1)
            {
                reamining_card = fila.front();
                fila.pop();
            }
            
        }

        cout << "Discarded cards: ";
        for (size_t i = 0; i < discarded_cards.size(); i++)
        {
            cout << discarded_cards.at(i);
            if (i < discarded_cards.size()-1)
            {
                cout << ", ";
            }
            
        }
        cout << "\nRemaining card: " << reamining_card << "\n";

        cin >> num;
    }
    
    

    
    return 0;
}