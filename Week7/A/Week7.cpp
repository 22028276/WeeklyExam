#include <iostream>

using namespace std;

void ham(int arr[]) {
    cout << "H�m f: " << sizeof(arr) << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    cout << "H�m main: " << sizeof(A) << endl;

    ham(A);

    return 0;
}
