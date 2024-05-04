#include <iostream>
using namespace std;


char* concat(const char* str1, const char* str2) {

    int length1 = 0;
    while (str1[length1] != '\0') {
        ++length1;
    }

    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }

    char* result = new char[length1 + length2];


    for (int i = 0; i < length1; ++i) {
        result[i] = str1[i];
    }

    for (int i = 0; i < length2; ++i) {
        result[length1 + i] = str2[i];
    }

    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    char* result = concat(str1, str2);

    cout << result << endl;



    return 0;
}


