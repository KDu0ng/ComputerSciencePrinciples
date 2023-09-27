#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "x" << "\t\t" << "y" << "\n";
  int c = -12;
  for (c = -12; c <= 16; c++) {
    cout << c << "\t\t" << pow(c, 6) - 3 * pow(c, 5) - 93 * pow(c , 4) + 87 * pow(c, 3) + 1596 * pow(c, 2) - 1380 * c - 2800 << "\n";
  }
}
//g++ -o 122d.exe 122d.cpp && ./122d.exe