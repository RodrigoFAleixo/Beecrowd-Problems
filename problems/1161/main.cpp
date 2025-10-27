#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int num1, num2;
    while (cin >> num1 >> num2)
    {   
        unsigned long long fat_num1 = 1, fat_num2 =1, result;

        for (int i = num1; i > 0; i--)
        {
            fat_num1 *= i;
            
        }
        for (int i = num2; i > 0; i--)
        {
            fat_num2 *= i;
        }
        
        result = fat_num1 + fat_num2;
        cout << result << "\n";
    }
    

    return 0;
}