#include <iostream>
#include <string>
using namespace std;

int main() {
  //Input
  string s1 = "";
  cout << "Enter string 1: ";
  getline(cin, s1);

  string s2 = "";
  cout << "Enter string 2: ";
  getline(cin, s2);

  //Math
  bool in = false;
  for (int c = 0; c < s1.length() - s2.length() + 1; c++) {
    if (s1.substr(c, s2.length()) == s2) {
      in = true;
    }
  }

  //Output
  if (in) {
    cout << "String 2 is in string 1.";
  } else {
    cout << "String 2 is not in string 1.";
  }
}
//g++ -o string16.exe string16.cpp && ./string16.exe