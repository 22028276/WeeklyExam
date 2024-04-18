#include <iostream>
#include <math.h>
using namespace std;


int rnd1(double x) {
    int result;
    if (x >= 0) {
        result = floor(x + 0.5);
    } else {
        result = ceil(x - 0.5);
    }
    return result;
}
int rnd2(double x) {
    int result = (int)x;
    double diff = x - (double)result;
    if (diff >= 0.5) {
        result++;
    } else if (diff <= -0.5) {
        result--;
    }
    return result;
}
int main() {
    double n;
    cin >> n;

    cout << rnd1(n);

}
