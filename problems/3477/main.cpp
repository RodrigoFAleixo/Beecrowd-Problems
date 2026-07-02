#include <bits/stdc++.h>

using namespace std;

int main(){

    int hip, num2, num3;

    cin >> hip >> num2 >> num3;

    int valHip = sqrt(pow(num2, 2) + pow(num3, 2));

    if (hip != valHip)
    {
        cout << "Nao eh retangulo!\n";
    }else{
        
        int areaTriangulo = num2 * num3 / 2;
        int raio = num3 /2;
        int areaMeioCirculo = (3 * (raio * raio)) /2; 

        cout << "AREA = " << areaTriangulo + areaMeioCirculo <<"\n";
    }

    
    

    return 0;
}