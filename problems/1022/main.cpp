#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// Soma: (N1*D2 + N2*D1) / (D1*D2)
// Subtração: (N1*D2 - N2*D1) / (D1*D2)
// Multiplicação: (N1*N2) / (D1*D2)
// Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)

// Entrada
// 4
// 1 / 2 + 3 / 4
// 1 / 2 - 3 / 4
// 2 / 3 * 6 / 6
// 1 / 2 / 3 / 4

// Saida
// 10/8 = 5/4
// -2/8 = -1/4
// 12/18 = 2/3
// 4/6 = 2/3
int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    char op_vetor[] = {'+','-','*','/'};
    double num, N1, N2, D1, D2;
    char ignora1, ignora2, op;
    string str;
    cin >> num;


    while (num--)
    {
        double value_N = 1;
        double value_D = 1;
        int divisor = 1;
        cin >> N1 >> ignora1 >> D1 >> op >> N2 >> ignora2 >> D2;
        
        if (op_vetor[0] == op)
        {
            value_N =  (N1*D2) + (N2*D1);
            value_D = D1*D2;
            
            divisor = mdc((int)value_N, (int)value_D);

        }else if(op_vetor[1] == op){
            value_N =  (N1*D2) - (N2*D1);
            value_D = D1*D2;

            divisor = mdc((int)value_N, (int)value_D);

        }else if(op_vetor[2] == op){
            value_N = (N1*N2);
            value_D = (D1*D2);

            divisor = mdc((int)value_N, (int)value_D);

        }else if(op_vetor[3] == op){
            value_N = (N1*D2);
            value_D = (N2*D1);

            divisor = mdc((int)value_N, (int)value_D);

        }

        if (divisor < 0) divisor = divisor*-1;
        
        
        if(divisor == 1){
            cout<< value_N << "/" << value_D << " = " << value_N << "/" << value_D << "\n";
        }else{
            cout<< value_N << "/" << value_D << " = " << (value_N/divisor) << "/" << (value_D/divisor) << "\n";
        }
        
    }
    

    return 0;
}