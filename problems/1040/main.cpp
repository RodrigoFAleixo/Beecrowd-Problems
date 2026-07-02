#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(int argc, char * argv[]){

    // ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    // cin.tie(nullptr); // Desvincula o cin do cout

    float num1, num2, num3, num4;
    
    cin >> num1 >> num2 >> num3 >> num4;

    float result = 0;
    float media = ((num1*2)+(num2*3)+(num3*4)+(num4*1)) / 10; 

    printf("Media: %.1f\n", media);


    if (media < 7)
    {   
        if(media < 5){
            printf("Aluno reprovado.\n");
            return 0;
        }

        printf("Aluno em exame.\n");
        cin >> result;
    }else{
        printf("Aluno aprovado.\n");
        return 0;
    }
    
    printf("Nota do exame: %.1f\n", result);


    result = (result + media)/2;
    if (result < 5)
    {
        cout << "Aluno reprovado.\n";
        
    }else{cout << "Aluno aprovado.\n";}
    
    
    printf("Media final: %.1f\n", result);

    return 0;
}