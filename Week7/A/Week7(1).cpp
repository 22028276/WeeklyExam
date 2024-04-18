#include <iostream>

using namespace std;


int count(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {143, 232, 3432, 4645, 5324, 6862, 71234, 887341, 931245, 101234};

    cout << "5 phần tử đầu: " << count(arr, 5) << endl;


    cout << "5 phần tử cuối: " << count(arr + 5, 5) << endl;

    return 0;
}
