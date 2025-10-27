#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(int argc, char * argv[]){

    ios::sync_with_stdio(0); // Desativa a sincronização entre as bibliotecas de entrada/saída do C++ (iostream) e do C (stdio)
    cin.tie(nullptr); // Desvincula o cin do cout

    int vetor_size;

    cin >> vetor_size;
    vector<int> nums;

    for (int i = 0; i < vetor_size; i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < vetor_size; i++)
    {
        if((nums.at(i) & 1) == 0)
        {
            cout << nums.at(i) << "\n";
        }
    }

    for (int i = vetor_size-1; i >= 0; i--)
    {
        if((nums.at(i) & 1) == 1)
        {
            cout << nums.at(i) << "\n";
        }
    }
    
    
    return 0;
}