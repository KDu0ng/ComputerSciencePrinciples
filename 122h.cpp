#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  cout << "Number" << "\t" << "Square" << "\t" << "Square Root" << "\t" << "Cube" << "\t" << "4th Root" << "\n";
  int c = 0;
  for (c = 0; c <= 20; c++) {
    printf("%d\t\t%d\t\t%.4lf\t\t%d\t\t%.4lf\n", c, (int)pow(c, 2), sqrt(c), (int)pow(c, 3), sqrt(sqrt(c)));
  }
}
//g++ -o 122h.exe 122h.cpp && ./122h.exe