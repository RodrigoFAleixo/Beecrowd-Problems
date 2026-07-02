#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    int altura, largura;

    cin >> altura >> largura;
    int matrix[altura][largura] = {0};
    int num;
    int point = 0;

    for (int i = 0; i < largura; i++)
    {
        cin >> num;
        if (num == 0)
        {
            continue;
        }else{
            point = altura - num;

            for (int j = altura; j >= point; j--)
            {
                matrix[0][j] = 1;
            }
            
        }
        
        
    }

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        cout << "\n";
    }
    
    



    return 0;
}