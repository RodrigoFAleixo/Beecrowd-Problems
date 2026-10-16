#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

    double x1, x2, y1, y2;
    double result;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    result = sqrt((pow((x2 - x1), 2) + pow((y2 - y1),2)));

    printf("%.4lf\n", result);

    return 0;
}