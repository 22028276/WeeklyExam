#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int& b = a;

    cout << "Gia tri cua a: " << a << endl;
    cout << "Gia tri cua bien tham chieu: " << b << endl;


    int c = 10;
    b = c;

    cout << "Gia tri cua a sau khi gan b = c: " << a << endl;
    cout << "Gia tri cua bien tham chieu sau khi gan b = c: " << b << endl;
    // Biến tham chiếu và biến mà nó chiếu tới là một biến trong bộ nhớ
    // Có thể khai báo một tham chiếu mà chưa chiếu ngay nó tới một biến thường
    // Có thể chiếu một tham chiếu tới một biến khác với đích ban đầu của nó
}
