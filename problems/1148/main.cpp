#include <bits/stdc++.h>

using namespace std;

int main(){

    int num_cidades, acordos = 0;
    while (cin >> num_cidades >> acordos)
    {
        int matriz[acordos][3];
        for (size_t i = 0; i < acordos; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            matriz[i][0] = a;
            matriz[i][1] = b;
            matriz[i][2] = c;
        }
        
        int num_consultas;
        cin >> num_consultas;
        for (size_t i = 0; i < num_consultas; i++)
        {
            
        }
        
    }
    




    return 0;
}