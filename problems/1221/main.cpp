#include <iostream>
#include <math.h>

// solving this promblem with erastótenes crivo
using namespace std;

bool solve(unsigned int num){
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    unsigned int limit = sqrt(num);
    for (unsigned int i = 3; i <= limit; i+=2)
    {
        if (!(num % i))
        {
            return false;
        }
        
    }
    return true;
}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int loop;
    unsigned int num;
    cin >> loop;
    

    while(loop--){
        cin >> num;
        if (solve(num))
        {
            cout << "Prime" << "\n";
        }else{
            cout << "Not Prime" << "\n";
        }
        
    }

    return 0;
}