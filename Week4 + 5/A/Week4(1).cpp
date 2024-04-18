#include <iostream>
#include <cstring>
using namespace std;

char str1[10];

int main() {
    char str2[10];

    cout << "str1 (khong khoi tao): ";
    for (int i = 0; i < 10; i++) {
        cout << str1[i];
    }
    cout << endl;
    cout << "In xau ki tu : " << str1 << endl;

    cout << "str2 (khong khoi tao): ";
    for (int i = 0; i < 10; i++) {
        cout << str2[i];
    }
    cout << endl;
    cout << "In xau ki tu : " << str2 << endl;



    char str3[6] = "abcd";
    cout << "str3 (N > 4): ";
    for (int i = 0; i < 6; i++) {
        cout << str3[i];
    }
    cout << endl;
    cout << "In xau ki tu : " << str3 << endl;

//
//   char str4[3] = "abcd";
//    cout << "str4 (N < 4): ";
//    for (int i = 0; i < 3; i++) {
//        cout << str4[i];
//    }
//    cout << endl;
//    cout << "In xau ki tu : " << str4 << endl;




//    char str5[4] = "abcd";
//    cout << "str5 (N = 4): ";
//    for (int i = 0; i < 4; i++) {
//        cout << str5[i];
 //   }
 //   cout << endl;
 //   cout << "In xau ki tu : " << str5 << endl;



    char str6[] = "abcd";
    cout << "str6: ";
    for (int i = 0; i < sizeof(str6); i++) {
        cout << str6[i];
    }
    cout << endl;
    cout << "In xau ki tu : " << str6 << endl;

    cout << "Kich thuoc thuc cua str6: " << sizeof(str6) << endl;

    return 0;
}
