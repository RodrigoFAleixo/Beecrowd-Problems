#include <iostream>
#include <vector>

using namespace std;

int contador = 0;

long long fib(long long num1, long long num2, int limit);

int main(int argc, char * argv[]){
    
    int loop = 0;
    cin >> loop;
    for(int i = 0; i < loop; i++){
        int limit;
        contador = 0;
        cin >> limit;
        if (limit == 0 || limit == 1)
        {
            cout << "Fib("<< limit << ")"<<" = "<< limit <<"\n";
        }else{
            cout << "Fib("<< limit << ")"<<" = "<<fib(0,1,limit)<< "\n";
        }
    }

    return 0;
}

long long fib(long long num1, long long num2, int limit){
    if (contador == (limit-1))
    {
        return num2;
    }

    ++contador;
    num2 = fib(num2, num1 + num2, limit);

    return num2;
    
}