#include <bits/stdc++.h>

using namespace std;


int main(){

    // se trata de um problema problema de trabalho em conjunto ou problema de produtividade, a taxa de resolução é somatorio de 1/velocidade de trabalho. Depois o tempo_total é medido por 1/taxa

    double num1, num2, num3;

    cin >> num1 >> num2 >> num3;

    double taxa = (1/num1) + (1/num2) + (1/num3);

    double tempo_total = 1/taxa;

    printf("%.3f\n", tempo_total);



    return 0;
}