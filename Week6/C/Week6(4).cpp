#include <iostream>
#include <ctime>

using namespace std;

int random(int N) {
    return rand() % N;
}

int main() {
    srand(time(NULL));

    int N;
    cin >> N;

    cout << random(N) << endl;

}
