#include <iostream>

using namespace std;

void ham(int arr[]) {
    cout << "Hàm f: " << sizeof(arr) << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    cout << "Hàm main: " << sizeof(A) << endl;

    ham(A);

    return 0;
}
