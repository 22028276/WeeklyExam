#include <iostream>
using namespace std;

int main() {

    char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    char var1 = 'x', var2 = 'y', var3 = 'z';


    cout << "Mang ban dau: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Bien ban dau: var1 = " << var1 << ", var2 = " << var2 << ", var3 = " << var3 << endl;

    cout << "Doc tran: " << endl;
    cout << "arr[-1] = " << arr[-1] << endl;
    cout << "arr[5] = " << arr[5] << endl;
    cout << "arr[6] = " << arr[6] << endl;




    char arr2d[3][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}, {'i', 'j', 'k', 'l'}};

    cout << "Mang 2 chieu ban dau:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }


    for (int j = 0; j < 6; j++) {
        arr2d[0][j] = 'x';
    }

    cout << "Mang 2 chieu sau khi ghi tran dong dau tien:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
