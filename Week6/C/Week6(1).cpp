#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool areCoprime(int a, int b) {
    return gcd(a, b) == 1;
}

int main() {
    int a, b;
    cout << "Nhap a va b : ";
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    if (areCoprime(a, b)) {
        cout << a << " va " << b << " la hai so nguyen to cung nhau." << endl;
    } else {
        cout << a << " va " << b << " khong phai la hai so nguyen to cung nhau." << endl;
    }
}
