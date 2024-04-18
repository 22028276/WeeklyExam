#include <iostream>

using namespace std;


int binary_search(int* arr, int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] > target)
            return binary_search(arr, left, mid - 1, target);
        return binary_search(arr, mid + 1, right, target);
    }

    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 9;
    int result = binary_search(arr, 0, n - 1, target);

    if (result != 0) {
        cout << "Vị trí " << result << endl;
    } else {
        cout << "Không tìm thấy" << endl;
    }


}
