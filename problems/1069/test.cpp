#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int num;
    cin >> num;

    while (num--)
    {   
        string str;

        int count1 = 0, count2 = 0;
        cin >> str;
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] == '<')
            {
                count1++;
            }
            if (str[i] =='>')
            {
                count2++;
            }
            
            
        }

        cout << (count1 < count2 ? count1 : count2) << "\n";
        
    }
    

    return 0;
}