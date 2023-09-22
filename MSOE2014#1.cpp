#include <iostream>
#include <string>
using namespace std;

int main() {
  //Input
  int count = 0;
  string word = "";
  cout << "Enter the word: ";
  getline(cin, word);

  //Math
  for (int c = 0; c < word.length() - 1; c++) {
    if (word[c] == word[c + 1]) {
      count++;
    }
  }

  //Output
  cout << "The word \"" << word << "\" contains " << count << " double letters.";
}
//g++ -o MSOE2014#1.exe MSOE2014#1.cpp && ./MSOE2014#1.exe