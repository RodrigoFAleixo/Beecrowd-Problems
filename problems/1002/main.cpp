#include <iostream>

using namespace std;
#define PI 3.14159

double area(double raio){
    double result = PI * (raio*raio);

    return result;
}

int main(){

    double raio;

    cin >> raio;

    printf("A=%.4lf\n", area(raio));


    return 0;
}