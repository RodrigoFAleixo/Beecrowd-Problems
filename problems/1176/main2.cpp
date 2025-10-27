#include <iostream>
#include <math.h>

using namespace std;

long long calc_fib(int num);

int main(int argc, char * argv[]){

    int loop = 0;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int num = 0;
        cin >> num;
        cout << "Fib (" << num << ") = " << calc_fib(num) << "\n";
    }



    return 0;
}


long long calc_fib(int num){

    double phi = (1 + sqrt(5)) / 2;
    double psi = (1 - sqrt(5)) / 2;
    long long value = round((pow(phi, num) - pow(psi, num)) / sqrt(5));
    
    return value;
}