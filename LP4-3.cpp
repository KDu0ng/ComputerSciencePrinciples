#include <iostream>
#include <cmath>
using namespace std;

int round(int x);

int main() {
  //Input
  int eggs = 0;
  cout << "Enter the number of eggs purchased: ";
  cin >> eggs;

  //Math
  int dozen = eggs / 12;
  double perd = 0;
  if (dozen < 4) {
    perd = 0.5;
  } else if (dozen < 6) {
    perd = 0.45;
  } else if (dozen < 11) {
    perd = 0.4;
  } else {
    perd = 0.35;
  }

  double result = eggs * (perd / 12.0);
  result = round(result * 100.0) / 100.0;

  //Output
  cout << "The bill is equal to: $" << result;
  
}
//g++ -o LP4-3.exe LP4-3.cpp && ./LP4-3.exe