#include <iostream>
#include <string>
using namespace std;

int main() {
  //Input
  int max = 0;
  char maxchar;
  char character;
  string sentence = "";
  cout << "Enter the sentence: ";
  getline(cin, sentence);

  //Math
  for (int c = 0; c < sentence.length(); c++) {
    character = sentence[c];
    int count = 0;
    for (int i = c; i < sentence.length(); i++) {
      if (character == sentence[i]) {
        count++;
      }
    }
    if (count > max) {
      max = count;
      maxchar = sentence[c];
    }
  }

  //Output
  cout << "The most occuring character is " << maxchar;
}
//g++ -o string17.exe string17.cpp && ./string17.exe