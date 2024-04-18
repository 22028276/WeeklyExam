#include <iostream>

using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    double b[4] = {1.1, 2.2, 3.3, 4.4};

    cout << "Int: " << sizeof(*a) << endl;
    cout << "Double: " << sizeof(*b) << endl;

}
