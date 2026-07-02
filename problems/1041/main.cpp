#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char * argv[]){

    // ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    // cin.tie(nullptr); // Desvincula o cin do cout

    float X, Y;
    cin >> X >> Y;
    
    if (X > 0 && Y > 0)
    {
        cout << "Q1\n";
    }else if(X < 0 && Y < 0){
        cout << "Q3\n";
    }else if(X > 0 && Y < 0){
        cout << "Q4\n";
    }else if(X < 0 && Y > 0){
        cout << "Q2\n";
    }else if(X != 0){
        cout << "Eixo X\n";
    }else if(Y != 0){
        cout << "Eixo Y\n";
    }
    else{
        cout << "Origem\n";
    }
    

    

    return 0;
}