#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long X, Y, Z;
    cin >> X >> Y >> Z;
    long long v[3] = {X, Y, Z};
    sort(v, v + 3);
    long long a = v[0], b = v[1], c = v[2];

    if (a * a + b * b != c * c) {
        cout << "Nao eh retangulo!\n";
        return 0;
    }

    long long numerador = 4LL * a * b + 3LL * b * b;
    long long area = numerador / 8;
    cout << "AREA = " << area << "\n";
    return 0;
}
