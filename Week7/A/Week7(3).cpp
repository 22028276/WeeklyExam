#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main() {
    char* test = weird_string();
    cout << "Dangling reference: " << test << endl;
}
