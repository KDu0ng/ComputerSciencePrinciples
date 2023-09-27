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
  int count = 0;
  for (int c = 0; c < s1.length() - s2.length() + 1; c++) {
    if (s1.substr(c, s2.length()) == s2) {
      count++;
    }
  }

  //Output
  cout << "The second string appears in the first " << count << " times.";
}
//g++ -o MSOE2008#6.exe MSOE2008#6.cpp && ./MSOE2008#6.exe