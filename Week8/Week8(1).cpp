#include <iostream>
#include <cstring> // For strlen, strcpy, strcat
using namespace std;

struct String {
    int n;
    char* str;


    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }


    ~String() {
        delete[] str;
    }


    void print() {
        cout << str;
    }


    void append(const char* s) {
        int len = strlen(s);
        char* temp = new char[n + len + 1];
        strcpy(temp, str);
        strcat(temp, s);
        delete[] str;
        str = temp;
        n = n + len;
};
};
int main() {
    String test("Xin");
    test.append(" Chao");
    test.print();

    return 0;
}
