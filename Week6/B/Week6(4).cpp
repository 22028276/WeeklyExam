#include <iostream>

using namespace std;

void f(int x, double y) {
   cout << "f(int, double)";
}

void f(double x, int y) {
   cout << "f(double, int)"; }
int main() {
    int a = 1;
    double b = 2;
    f(a,b);
}
