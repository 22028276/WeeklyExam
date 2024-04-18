#include <iostream>
using namespace std;

int main() {
    char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};
    char daytab2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};


cout << "Mang daytab1[2][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab1[i][j] << " ";
        }
        cout << endl;
    }

cout << "Mang daytab2[2][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab2[i][j] << " ";
        }
        cout << endl;
    }




    char daytab3[2][12] = {
  {31,28,31},
  {31,29,31,30}
};
    char daytab4[2][12] = {
  31,28,31,30,31,
  31,29,31,30,31,30
};


cout << "Mang daytab3[2][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab3[i][j] << " ";
        }
        cout << endl;
    }

cout << "Mang daytab4[2][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab4[i][j] << " ";
        }
        cout << endl;
    }




    char daytab5[][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};
    char daytab6[][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
};


cout << "Mang daytab5[][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab5[i][j] << " ";
        }
        cout << endl;
    }

cout << "Mang daytab6[][12]:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << (int)daytab6[i][j] << " ";
        }
        cout << endl;
    }



//    char daytab7[][] = {
//  {31,28,31,30,31,30,31,31,30,31,30,31},
//  {31,29,31,30,31,30,31,31,30,31,30,31}
//};
//    char daytab8[][] = {
//  31,28,31,30,31,30,31,31,30,31,30,31,
 // 31,29,31,30,31,30,31,31,30,31,30,31
//};


//cout << "Mang daytab7[][]:" << endl;
 //   for (int i = 0; i < 2; i++) {
 //       for (int j = 0; j < 12; j++) {
  //          cout << (int)daytab7[i][j] << " ";
  //      }
 //       cout << endl;
 //   }

//cout << "Mang daytab8[][]" << endl;
//    for (int i = 0; i < 2; i++) {
 //       for (int j = 0; j < 12; j++) {
 //           cout << (int)daytab8[i][j] << " ";
 //       }
  //      cout << endl;
  //  }

}





