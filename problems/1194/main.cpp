#include <bits\stdc++.h>

using namespace std;

class No{
    public:
    char indice;
    list<No> filhos;

    private:
};

int main(){

    int qtd_testes;
    
    int qtd_letras;
    
    string s1, s2;
    string result;
    

    cin >> qtd_testes;
    for (int i = 0; i < qtd_testes; i++)
    {
        cin >> qtd_letras >> s1 >> s2;
        No raiz;
        raiz.indice = s1.at(0);
    }

    return 0;
}