#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){


    vector<int> notas = {10000, 5000, 2000, 1000, 500, 200};
    vector<double> d_notas = {100, 50, 20, 10, 5, 2};
    
    vector<int> moedas = {100, 50, 25, 10, 5, 1};
    vector<double> d_moedas = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    int qtd_notas_moedas = 0;
    double rest = 0;

    cin >> rest;
    rest = rest * 100;
    int i_rest = (int)rest;

    cout << "NOTAS:\n";
    for(int i = 0; i < notas.size(); i++)
    {
        qtd_notas_moedas = i_rest / notas[i];
        i_rest = i_rest % notas[i];
        cout << qtd_notas_moedas<< " nota(s) de R$ ";
        printf("%.2lf\n", d_notas[i]);
    }

    cout << "MOEDAS:\n";
    for(int i = 0; i < moedas.size(); i++)
    {
        qtd_notas_moedas = i_rest / moedas[i];
        i_rest = i_rest % moedas[i];
        cout << qtd_notas_moedas<< " moeda(s) de R$ ";
        printf("%.2lf\n", d_moedas[i]);
    }
    
    return 0;
}