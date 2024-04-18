#include <iostream>
using namespace std;

int arr1[5];
int arr3[5] = {1,2,3,4};
int main() {
    int arr2[5];

    cout << "arr1 (khong khoi tao): ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "arr2 (khong khoi tao): ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;


    int arr4[5] = {1, 2, 3, 4};
    cout << "arr4 (N > 4): ";
    for (int i = 0; i < 5; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;


//    int arr5[3] = {1, 2, 3, 4};
//    cout << "arr5 (N < 4): ";
 //   for (int i = 0; i < 3; i++) {
 //       cout << arr5[i] << " ";
  //  }
  //  cout << endl;


    int arr6[] = {1, 2, 3, 4};
    cout << "arr6: ";
    for (int i = 0; i < sizeof(arr6) / sizeof(int); i++) {
        cout << arr6[i] << " ";
    }
    cout << endl;

    return 0;
}
