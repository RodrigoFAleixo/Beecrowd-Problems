#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(int qtd_p, int salto, int nc){
    vector<int> vetor(qtd_p);
    for (int i = 1; i <= qtd_p; i++)
    {
        vetor.at(i-1) = i; 
    }
    
    int i = 0;
    bool check = true;
    while (check)
    {
        i = (i + salto) % vetor.size();
        
        vetor.erase(vetor.begin() + i);
        if (vetor.size() == 1)
        {
            printf("Case %d: %d\n", nc+1, vetor[0]);
            return;
        }
        
    }
    
    
    
}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int loop, loop2 = 0;
    int qtd_p, salto;
    cin >> loop;

    while (loop2 != loop)
    {   
        cin >> qtd_p >> salto;
        solve(qtd_p, salto-1, loop2);
        loop2++;
    }
    

    return 0;
}