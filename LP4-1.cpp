#include <iostream>
using namespace std;

int main() {
  //Input
  int pages = 0;
  cout << "Enter the number of copies to be printed: ";
  cin >> pages;

  //Math
  double perp = 0;
  if (pages < 100) {
    perp = 0.3;
  } else if (pages < 500) {
    perp = 0.28;
  } else if (pages < 750) {
    perp = 0.27;
  } else if (pages < 1001) {
    perp = 0.26;
  } else {
    perp = 0.25;
  }
  double result = perp * pages;

  //output
  cout << "Price per copy is: $" << perp;
  cout << "\nTotal cost is: $" << result;
  
}
//g++ -o LP4-1.exe LP4-1.cpp && ./LP4-1.exe