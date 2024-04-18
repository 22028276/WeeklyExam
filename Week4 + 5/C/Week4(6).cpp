#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[10000];
    for (int i = 0;i <n;i++)
    cin >> a[i];
    int result = 0;
    for (int i = 1;i<n;i++) {
    if (a[i] == a[0])
    result = 1;
}
    if (result == 1)
    cout << "Yes";
    else cout << "No";
}
