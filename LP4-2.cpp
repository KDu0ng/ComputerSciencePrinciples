#include <iostream>
using namespace std;

int main() {
  //Input
  int weight = 0;
  int length = 0;
  int width = 0;
  int height = 0;
  
  cout << "Enter package weight in kilograms: ";
  cin >> weight;
  cout << "Enter package length in centimeters: ";
  cin >> length;
  cout << "Enter package width in centimeters: ";
  cin >> width;
  cout << "Enter package height in centimeters: ";
  cin >> height;
  
  //Math
  bool heavy = false;
  bool large = false;

  if (length * width * height > 100000) {
    large = true;
  }
  if (weight > 27) {
    heavy = true;
  }

  //output
  if (heavy && large) {
    cout << "Too heavy and too large.";
  } else if (heavy) {
    cout << "Too heavy.";
  } else if (large) {
    cout << "Too large.";
  } else {
    cout << "Good package.";
  }
}
//g++ -o LP4-2.exe LP4-2.cpp && ./LP4-2.exe