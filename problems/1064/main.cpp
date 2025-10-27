#include <iostream>

using namespace std;

int main(){
    int num_pos = 0;
    float media = 0;

    float num;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if(num > 0){
            media += num;
            num_pos++;
        }
    }

    if(num_pos == 0){
        cout << 0 << " valores positivos\n"<< 0;
    }else{
        media = media / (float) num_pos;
        cout << num_pos << " valores positivos\n";
        printf("%.1f\n", media);
    }




    
}