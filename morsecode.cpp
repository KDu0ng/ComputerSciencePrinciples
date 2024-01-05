#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

string conversions[37];
string result[37];
int len = 37;

void initializeList() {
  conversions[0] = ".-";
  result[0] = "A";
  conversions[1] = "-...";
  result[1] = "B";
  conversions[2] = "-.-.";
  result[2] = "C";
  conversions[3] = "-..";
  result[3] = "D";
  conversions[4] = ".";
  result[4] = "E";
  conversions[5] = "..-.";
  result[5] = "F";
  conversions[6] = "--.";
  result[6] = "G";
  conversions[7] = "....";
  result[7] = "H";
  conversions[8] = "..";
  result[8] = "I";
  conversions[9] = ".---";
  result[9] = "J";
  conversions[10] = "-.-";
  result[10] = "K";
  conversions[11] = ".-..";
  result[11] = "L";
  conversions[12] = "--";
  result[12] = "M";
  conversions[13] = "-.";
  result[13] = "N";
  conversions[14] = "---";
  result[14] = "O";
  conversions[15] = ".--.";
  result[15] = "P";
  conversions[16] = "--.-";
  result[16] = "Q";
  conversions[17] = ".-.";
  result[17] = "R";
  conversions[18] = "...";
  result[18] = "S";
  conversions[19] = "-";
  result[19] = "T";
  conversions[20] = "..-";
  result[20] = "U";
  conversions[21] = "...-";
  result[21] = "V";
  conversions[22] = ".--";
  result[22] = "W";
  conversions[23] = "-..-";
  result[23] = "X";
  conversions[24] = "-.--";
  result[24] = "Y";
  conversions[25] = "--..";
  result[25] = "Z";
  conversions[26] = ".----";
  result[26] = "1";
  conversions[27] = "..---";
  result[27] = "2";
  conversions[28] = "...--";
  result[28] = "3";
  conversions[29] = "....-";
  result[29] = "4";
  conversions[30] = ".....";
  result[30] = "5";
  conversions[31] = "-....";
  result[31] = "6";
  conversions[32] = "--...";
  result[32] = "7";
  conversions[33] = "---..";
  result[33] = "8";
  conversions[34] = "----.";
  result[34] = "9";
  conversions[35] = "-----";
  result[35] = "0";
  conversions[36] = "/";
  result[36] = " ";
}

string toText(string morse) {
  string text = "";
  for (int c = 0; c < morse.length(); c++) {
    string letter = "";
    while (c < morse.length() && morse.substr(c, 1) != " ") {
      letter += morse.substr(c, 1);
      c++;
    }

    for (int i = 0; i < len; i++) {
      if (letter.compare(conversions[i]) == 0) {
        text += result[i];
        i = len;
      }
    }
  }
  return text;
}

string toMorse(string text) {
  string morse = "";
  for (int c = 0; c < text.length(); c++) {
    for (int i = 0; i < len; i++) {
      if (text.substr(c, 1).compare(result[i]) == 0) {
        morse += conversions[i] + " ";
        i = len;
      }
    }
  }
  return morse;
}

int main() {
  initializeList();
  bool cont = true;
  while (cont) {
    string select = "";
    while (select.compare("0") != 0 && select.compare("1") != 0) {
      cout << "\nWhat are you converting to?\n";
      cout << "[0] Text to morse\n";    
      cout << "[1] Morse to text\n";
      cout << "Enter a number: ";
      getline(cin, select);
      if (select.compare("0") != 0 && select.compare("1") != 0) {
        cout << "Invalid input\n\n";
      }
    }

    if (select.compare("0") == 0) {
      string text = "";
      cout << "\nInput the text: ";
      getline(cin, text);
      for (auto & c: text) c = toupper(c);
      cout << "Here is the text in morse code:\n\n" << toMorse(text);
    } else {
      string morse = "";
      cout << "\nInput the morse code (Include a space between every text character and use . and - and / for a space): ";
      getline(cin, morse);
      cout << "Here is the morse code in text:\n\n" << toText(morse);
    }

    select = "";
    while (select.compare("0") != 0 && select.compare("1") != 0) {
      cout << "\n\nWould you like to keep using the converter?\n";
      cout << "[0] Yes\n";    
      cout << "[1] Exit\n";
      cout << "Enter a number: ";
      getline(cin, select);
      if (select.compare("0") != 0 && select.compare("1") != 0) {
        cout << "Invalid input\n\n";
      }
    }

    if (select.compare("1") == 0) {
      cont = false;
    }
  }
}
//g++ -o morsecode.exe morsecode.cpp && ./morsecode.exe