#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    
    float items[] = {4,4.5,5,2,1.5};
    int cod = 0, qtd = 0;
    float result = 0;

    cin >> cod >> qtd;

    result = items[cod-1] * qtd;
    
    cout << "Total: " << "R$ ";
    printf("%.2f\n", result);

    return 0;
}