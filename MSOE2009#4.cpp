#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
  static const double pi = atan(1.0) * 4.0;
  return exp(-x * x / 2) / sqrt(2 * pi);
}

int main() {
  //Input
  int a = 0;
  int b = 0;
  int n = 0;
  cout << "Enter value of a: ";
  cin >> a;
  cout << "Enter value of b: ";
  cin >> b;
  cout << "Enter value of n: ";
  cin >> n;

  //Math
  double h = (b - (double) a) / n;
  double result = 0;
  for (int c = 0; c < n; c++) {
    result += f(a + h * c);
  }
  result *= h;

  //Output
  cout << "The area is " << result;
}

//g++ -o MSOE2009#4.exe MSOE2009#4.cpp && ./MSOE2009#4.exe