#include <iostream>
#include <string>
using namespace std;

int compare(string x, string y);

int main() {
  //Input
  string sentence = "";
  cout << "Enter the sentence: ";
  getline(cin, sentence);
  char space = ' ';

  //Output
  int mark = sentence.length();
  for (int c = sentence.length() - 1; c >= 0; c--) {
    if (sentence[c] == space) {
      for (int i = c + 1; i < mark; i++) {
        cout << sentence[i];
      }
      cout << " ";
      mark = c;
    }
  }

  for (int i = 0; i < mark; i++) {
    cout << sentence[i];
  }
}
//g++ -o string12.exe string12.cpp && ./string12.exe