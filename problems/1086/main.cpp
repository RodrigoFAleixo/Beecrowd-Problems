#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int qtd_min_tabuas;

void solve(){

}

int main(){

    int x, y, qtd_tabuas, tabua, largura;
    vector<int> tabuas;
    cin >> x >>y ;
    x = x*100;
    y = y*100;
    
    cin >> largura;
    cin >> qtd_tabuas; 
    for (int i = 0; i < qtd_tabuas; i++)
    {
        cin >> tabua;
        tabuas.push_back(tabua*100);
    }

    sort(tabuas.begin(), tabuas.end());

    int qtd_x = 0, qtd_y = 0;

    if((x % largura != 0) && (y % largura != 0)){
        cout << "impossivel";
    }else if(x % largura == 0){
        qtd_x = x/largura;
    }else if(y % largura == 0){
        qtd_y = y/largura;
    }

    vector<int> colocar_tabuas_x(qtd_x);
    vector<int> colocar_tabuas_y(qtd_y);

    if(qtd_x != 0){
        solve();
    }
    if (qtd_y != 0)
    {
        solve();
    }
    

    return 0;
}