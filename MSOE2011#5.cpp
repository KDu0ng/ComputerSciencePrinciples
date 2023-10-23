#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
  double const a0 = -4;
  double const a1 = 31.1767;
  double const a2 = -52.0433;
  double const a3 = 34.7625;
  double const a4 = -10.9167;
  double const a5 = 1.6108;
  double const a6 = -0.09;

  return a6 * pow(x, 6) + a5 * pow(x, 5) + a4 * pow(x, 4) + a3 * pow(x, 3) + a2 * pow(x, 2) + a1 * x + a0;
}

double fprime(double x) {
  double const a1 = 31.1767;
  double const a2 = -52.0433;
  double const a3 = 34.7625;
  double const a4 = -10.9167;
  double const a5 = 1.6108;
  double const a6 = -0.09;

  return a6 * pow(x, 5) * 6 + a5 * pow(x, 4) * 5 + a4 * pow(x, 3) * 4 + a3 * pow(x, 2) * 3 + a2 * x * 2 + a1;
}

int main() {
  double x = 0;
  double y = 100;
  cout << "Enter your guess: ";
  cin >> x;
  
  cout << "Initial position: f(" << x << ") = ";
  while (abs(y) > 0.001) {
    y = f(x);
    cout << y << "\n";
    x = x - y / fprime(x);
    if (abs(y) > 0.001) {
      cout << "Refined zero: f(" << x << ") = ";
    }
  }
}

//g++ -o MSOE2011#5.exe MSOE2011#5.cpp && ./MSOE2011#5.exe