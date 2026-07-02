#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    string nome;
    double distancia;
    vector<double> distancias;


    while (getline(cin, nome))
    {
        cin >> distancia;
        distancias.push_back(distancia);
        cin.ignore();
    }

    double media = 0;
    for (size_t i = 0; i < distancias.size(); i++)
    {
        media += distancias.at(i);
    }
    
    media = media/distancias.size();
    
    printf("%.1lf\n", media);
    return 0;
}