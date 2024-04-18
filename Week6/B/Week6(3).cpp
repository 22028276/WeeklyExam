#include <iostream>

using namespace std;

int min1(int a, int b, int c, int d) {
   // if a is the smallest return it
   if (a <= b && a <= c && a <= d) return a;

   // otherwise, if b is the smallest of b, c, and d, return it
   if (b <= c && b <= d) return b;

   // otherwise, return the smaller of c and d
   if (c <= d) return c;
   return d;
}

int min2(int a, int b, int c, int d) {
   int min = a;
   if (b < min) min = b;
   if (c < min) min = c;
   if (d < min) min = d;
   return min;
}

int min3(int a, int b, int c, int d) {
   if (a < b && a < c && a < d) return a;
   if (b < c && b < d)          return b;
   if (c < d)                   return c;
   return d;
}

int min4(int a, int b, int c, int d) {
   if (a <= b) {
      if (a <= c) {
         if (a <= d)  return a;
         else return d;
      }
      if (c <= d) return c;
      else return d;
   }
   if (b <= c) {
      if (b <= d) return b;
      else return d;
   }
   else if (c <= d) return c;
   return d;
}

int min5(int a, int b) {
   if (a <= b) return a;
   else        return b;
}
int min6(int a, int b, int c, int d) {
   return min5(min5(a, b), min5(c, d));
}

int main() {
    // Test cases
    int test_cases[][4] = {
        {5, 2, 8, 4},
        {-10, 1, -3, 7},
        {-3, -7, -9, -2},
        {0, 0, 0, 0}
    };

    // Expected results
    int expected[] = {2, -10, -9, 0};

    // Test min1
    cout << "Testing min1:" << endl;
    for (int i = 0; i < 4; ++i) {
        int result = min1(test_cases[i][0], test_cases[i][1], test_cases[i][2], test_cases[i][3]);
        cout << "Test case " << i + 1 << ": " << (result == expected[i] ? "Pass" : "Fail") << endl;
    }

    // Test min2
    cout << "Testing min2:" << endl;
    for (int i = 0; i < 4; ++i) {
        int result = min2(test_cases[i][0], test_cases[i][1], test_cases[i][2], test_cases[i][3]);
        cout << "Test case " << i + 1 << ": " << (result == expected[i] ? "Pass" : "Fail") << endl;
    }

    // Test min3
    cout << "Testing min3:" << endl;
    for (int i = 0; i < 4; ++i) {
        int result = min3(test_cases[i][0], test_cases[i][1], test_cases[i][2], test_cases[i][3]);
        cout << "Test case " << i + 1 << ": " << (result == expected[i] ? "Pass" : "Fail") << endl;
    }

    // Test min4
    cout << "Testing min4:" << endl;
    for (int i = 0; i < 4; ++i) {
        int result = min4(test_cases[i][0], test_cases[i][1], test_cases[i][2], test_cases[i][3]);
        cout << "Test case " << i + 1 << ": " << (result == expected[i] ? "Pass" : "Fail") << endl;
    }

    // Test min6
    cout << "Testing min6:" << endl;
    for (int i = 0; i < 4; ++i) {
        int result = min6(test_cases[i][0], test_cases[i][1], test_cases[i][2], test_cases[i][3]);
        cout << "Test case " << i + 1 << ": " << (result == expected[i] ? "Pass" : "Fail") << endl;
    }

    return 0;
}
