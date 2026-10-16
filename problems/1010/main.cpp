#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int id_peca;
    double preco, soma=0, qtd_peca;

    while(cin >> id_peca >> qtd_peca >> preco){
        soma += (preco * qtd_peca);
    }

    printf("VALOR A PAGAR: R$ %.2f\n", soma);
    return 0;
}