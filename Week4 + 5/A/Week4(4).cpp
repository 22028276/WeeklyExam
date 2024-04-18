#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int N = 5;
    char str[N];

    cout << "Nhap chuoi ki tu : ";
    cin >> str;

    cout << "_" << str << "_" << endl;

    cout << "Do dai chuoi: " << strlen(str) << endl;
    cout << "Kich thuoc mang: " << sizeof(str) << endl;

    return 0;
}
