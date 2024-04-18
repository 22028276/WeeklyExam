#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int N = 30;
    int arr[N];


    srand(time(NULL));


    cout << "Mang ban dau: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
