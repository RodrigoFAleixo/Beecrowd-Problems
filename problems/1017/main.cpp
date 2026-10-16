#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    double km_por_litro = 12, qtd_litros;
    int num1, num2, km_percorridos;
    cin >> num1;
    cin >> num2;

    km_percorridos = num2 * num1;

    qtd_litros = km_percorridos /km_por_litro;


    printf("%.3lf\n", qtd_litros);
    return 0;
}