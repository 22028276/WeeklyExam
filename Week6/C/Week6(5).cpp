#include <iostream>
#include <string>

using namespace std;


string decimalToBinary(int n) {
    string result = "";
    while (n > 0) {
        result = to_string(n % 2) + result;
        n = n/2;
    }
    return result;
}


int binaryToDecimal(string n) {
    int result = 0;
    int test = 1;
    for (int i = n.length() - 1; i >= 0; --i) {
        if (n[i] == '1') {
            result = result + test;
        }
        test = test * 2;
    }
    return result;
}

int main() {
    int m;
    cout << "Nhap so he co so 10: ";
    cin >> m;

    string result1 = decimalToBinary(m);
    cout << "So he co so 2 tuong ung: " << result1 << endl;

    string n;
    cout << "Nhap so he co so 2: ";
    cin >> n;

    int result2 = binaryToDecimal(n);
    cout << "So he co so 10 tuong ung: " << result2 << endl;

}
