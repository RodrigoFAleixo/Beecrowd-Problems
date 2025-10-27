 #include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

void solve(){

}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    // cin.tie(nullptr); // Desvincula o cin do cout

    
    int loop;
    cin >> loop;

    for (int i = 0; i < loop; i++)
    {
        int result = 0, temp;
        int num;
        cin >> num;
        
        for (int j = 0; j < num; j++)
        {
            cin >> temp;
            if (j == (num)/2)
            {
    
                result = temp; 
            }
            
        }

        cout << "Case " << (i+1) << ": " << result <<"\n";
        
    }
    

    return 0;
}