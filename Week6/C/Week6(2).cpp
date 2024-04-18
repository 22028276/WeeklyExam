#include <iostream>

using namespace std;


void printLine(int M, int N) {
    for (int i = 0; i < M; ++i) {
        cout << " ";
    }
    for (int i = 0; i < N; ++i) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        printLine(n - i, 2 * i - 1);
    }

}
