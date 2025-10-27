#include <iostream>

using namespace std;

int main(){
    
    int vetor[3];
    int vetor_save[3];

    cin >> vetor[0] >> vetor[1] >> vetor[2];
    

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    for (int i = 0; i < tamanho; i++)
    {
        vetor_save[i] = vetor[i];
    }



    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            int aux;
            if (vetor[i] < vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
            
        }
        
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor[i] << "\n";
    }

    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        cout << vetor_save[i] << "\n";
    }
    

    return 0;
}