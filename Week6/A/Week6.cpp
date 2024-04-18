#include <iostream>
using namespace std;

int main() {

    int a[100];
    char b[100];

    cout << "Mang a:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "&a[" << i << "]: " << (void *)&a[i] << endl;
    }

    cout << "Mang b:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "&b[" << i << "]: " << (void *)&b[i] << endl;
    }

}
