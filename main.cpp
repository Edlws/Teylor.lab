#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES
using namespace std;
int main() {
    long long k, c, b;
    double x, eps, y, cosin, sum;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter k (Note: the larger 'k', the greater the accuracy and the longer the calculation.): " << endl;
    cin >> k;
    y = 1;
    eps = pow(10, -k);
    cosin = cos(x);
    sum = (0);
    b = 1;
    if (x > 0) {
        for (x; x > 2 * M_PI;) {
            x -= 2 * M_PI;
        }
    } else {
        for (x; x < -2 * M_PI;) {
            x += 2 * M_PI;
        }
    }
    cout << "X ::= " << x << endl;
    for (c = 1; abs(y) > eps; c += 2) {
        for (b; b < c; b += 1) {
            y *= x / b;
        }
        sum += y;
        y *= (-1);
    }
    cout << "Standart function: " << fixed << setprecision(30) << cosin << endl;
    cout << "Program result:    " << fixed << setprecision(30) << sum;
    return 0;
}
