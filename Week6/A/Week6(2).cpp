#include <iostream>
using namespace std;


void passByValue(int x) {
    cout << "Dia chi " << &x << endl;
    x = 10;
}


void passByReference(int &x) {
    cout << "Dia chi " << &x << endl;
    x = 10;
}

int main() {
    int num = 5;

    cout << "Dia chi cua bien trong ham main: " << &num << endl;

    // Sử dụng pass-by-value
    cout << "Pass-by-value:" << endl;
    passByValue(num);
    cout << "Gia tri " << num << endl;


    cout << "Pass-by-reference:" << endl;
    passByReference(num);
    cout << "Gia tri " << num << endl;
}
// tham trị được sao chép từ biến num và được lưu trữ ở một vi trí khác trong bộ nhớ.
//tham biến là một tên gọi khác của biến num, và các thay đổi được thực hiện trên tham biến đều ảnh hưởng đến biến num gốc.
