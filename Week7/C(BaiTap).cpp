#include <iostream>

using namespace std;

// Hàm tính độ dài của xâu
int strlen(const char* a) {
    int length = 0;
    while (*a != '\0') {
        length++;
        a++;
    }
    return length;
}

// Hàm đảo ngược xâu
void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

// Hàm xóa ký tự c trong xâu a
void delete_char(char a[], char c) {
    int length = strlen(a);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] != c) {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
}

// Hàm độn phải xâu a để có độ dài n
void pad_right(char a[], int n) {
    int length = strlen(a);
    if (length < n) {
        for (int i = length; i < n; i++) {
            a[i] = ' ';
        }
        a[n] = '\0';
    }
}

// Hàm độn trái xâu a để có độ dài n
void pad_left(char a[], int n) {
    int length = strlen(a);
    if (length < n) {
        for (int i = length; i < n; i++) {
            for (int j = length; j > 0; j--) {
                a[j] = a[j - 1];
            }
            a[0] = ' ';
        }
    }
}

// Hàm cắt bớt đoạn cuối của xâu a để có độ dài n
void truncate(char a[], int n) {
    int length = strlen(a);
    if (length > n) {
        a[n] = '\0';
    }
}

// Hàm kiểm tra xâu có đối xứng hay không
bool is_palindrome(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        if (a[i] != a[length - i - 1]) {
            return false;
        }
    }
    return true;
}

// Hàm loại bỏ các ký tự trắng đứng ở đầu xâu
void trim_left(char a[]) {
    int length = strlen(a);
    int i = 0;
    while (a[i] == ' ') {
        i++;
    }
    for (int j = 0; j < length - i; j++) {
        a[j] = a[j + i];
    }
    a[length - i] = '\0';
}

// Hàm loại bỏ các ký tự trắng đứng ở cuối xâu
void trim_right(char a[]) {
    int length = strlen(a);
    while (a[length - 1] == ' ') {
        length--;
    }
    a[length] = '\0';
}

int main() {
    char str1[] = "test abcdefghijk";
    char str2[] = "abcba";
    char str3[] = "        test          for nothing             ";


    // Demo các hàm
    reverse(str1);
    cout << "Reversed string: " << str1 << endl;

    delete_char(str2, 'd');
    cout << "After deleting 'd': " << str2 << endl;

    pad_left(str3, 20);
    cout << "Padded left string: " << str3 << endl;

    pad_right(str3, 20);
    cout << "Padded right string: " << str3 << endl;



    truncate(str1, 5);
    cout << "Truncated string: " << str1 << endl;

    cout << "Is palindrome: " << is_palindrome(str2) << endl;

    trim_right(str3);
    cout << "Trimmed right string: " << str3 << endl;

    trim_left(str3);
    cout << "Trimmed left string: " << str3 << endl;



}
