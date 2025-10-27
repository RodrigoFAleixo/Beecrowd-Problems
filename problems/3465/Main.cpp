#include <bits/stdc++.h>

using namespace std;

int main(){

    // Formula de Heron
    //Area = sqrt(s * (s-num1) * (s-num2) * (s-num3))
    //s = semiperimetro = (num1 + num2 + num3) / 2

    double num1,num2,num3;
    cin >> num1 >> num2 >> num3;

    double semiperimetro = (num1 + num2 + num3)/2;
    // cout << semiperimetro << "\n";

    double area = sqrt(semiperimetro * (semiperimetro-num1) * (semiperimetro - num2) * (semiperimetro - num3));

    // cout << area << " m2" << "\n";
    printf("%.3f m2\n", area);

    return 0;
}