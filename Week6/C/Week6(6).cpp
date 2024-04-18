#include <iostream>

using namespace std;


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}


int toHop(int k, int n) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}


int kiemTra(int k, int n) {
    if (k >= 0 && k <= n && n >= 1 && n <= 20) {
        return 1;
    } else {
        return 0;
    }
}


void nhapKN(int k[], int n[], int *soPhanTu) {
    *soPhanTu = 0;
    while (true) {
        cin >> k[*soPhanTu] >> n[*soPhanTu];
        if (k[*soPhanTu] == -1 && n[*soPhanTu] == -1)
            break;
        (*soPhanTu)++;
    }
}

int main() {
    int k[100], n[100], soPhanTu;


    nhapKN(k, n, &soPhanTu);

    for (int i = 0; i < soPhanTu; ++i) {
        if (kiemTra(k[i], n[i])) {
            cout << toHop(k[i], n[i]) << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }


}
