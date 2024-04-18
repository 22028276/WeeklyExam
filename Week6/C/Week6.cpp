#include <iostream>

using namespace std;

int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrimes(int N) {
    for (int i = 2; i < N; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;

    printPrimes(N);

}
