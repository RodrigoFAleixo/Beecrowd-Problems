#include <iostream>
#include <vector>
#include <cctype>


using namespace std;


int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int swap = 0;

    string str;
    while(getline(cin, str)){
        swap = 0;
        for (size_t i = 0; i < str.size(); i++)
        {   
            
            while(str[i] != ' ' && i < str.size()){
                if (swap == 0)
                {
                    str.at(i) = toupper(str[i]);
                    swap = 1;
                    
                }else if(swap == 1){
                    str.at(i) = tolower(str[i]);
                    swap = 0;
                    
                }
                
                i++;
            }
            
            
        }
        cout << str<< "\n";

    } 

    return 0;
}