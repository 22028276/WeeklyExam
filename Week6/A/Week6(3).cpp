#include <iostream>
#include <string>
using namespace std;


void printArray(int arr[], int size) {
    cout << "Dia chi cua mang trong ham printArray: " << arr << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void printString(string str) {
    cout << "Dia chi cua chuoi trong ham printString: " << &str << endl;
    str = "Goodbye";
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    string myString = "Hello";

    cout << "Dia chi cua mang trong ham main: " << array << endl;
    cout << "Dia chi cua chuoi trong ham main: " << &myString << endl;


    cout << "Print array:" << endl;
    printArray(array, 5);

    cout << "Print string:" << endl;
    printString(myString);
    cout << "Chuoi sau khi goi ham printString: " << myString << endl;

    // - Mảng được truyền theo cơ chế pass-by-reference.
    //   Bất kỳ thay đổi nào được thực hiện trên mảng trong hàm cũng ảnh hưởng đến mảng gốc.
    // - Chuỗi (string) được truyền theo cơ chế pass-by-value.
    //   Thay đổi giá trị của chuỗi trong hàm không ảnh hưởng đến chuỗi gốc trong hàm main.

    return 0;
}
