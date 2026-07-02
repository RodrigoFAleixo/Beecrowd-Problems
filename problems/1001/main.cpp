#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(int num1, int num2){
    int x;

    x = num1 + num2;
    cout <<  "X = " << x << "\n"; 
}

int main(int argc, char *argv[]){
    // ios::sync_with_stdio(0);
    // cin.tie(nullptr);

    int loop, num1, num2;
    
    cin >> num1 >> num2;
    solve(num1, num2);
    return 0;
}