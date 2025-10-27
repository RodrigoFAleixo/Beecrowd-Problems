#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int mdc(int a, int b){
    int result;
    while (b != 0)
    {
        result = a % b;
        a = b;
        b = result;
    }
    
    return a;
}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int num, n1, n2;
    cin >> num;


    while(num--)
    {
        cin >> n1 >> n2;
        cout << mdc(n1, n2) << "\n";
    }
    

    return 0;
}