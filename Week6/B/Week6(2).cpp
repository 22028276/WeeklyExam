#include <iostream>
using namespace std;
void negate(int a) {
    a = -a;
}

int main() {
    int a = 17;
    cout << a;
    negate(a);
    cout << a;
}
// gia tri cua a khong thay doi do truyen tham tri
