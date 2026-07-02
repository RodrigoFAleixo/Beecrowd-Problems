#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve(vector<int> v){
    sort(v.begin(), v.end());

    cout << v[2] << " eh o maior\n";
}

int main(int argc, char *argv[]){

    vector<int> v = {0,0,0};
    
    cin >> v[0] >> v[1] >> v[2];
    solve(v);

    return 0;
}