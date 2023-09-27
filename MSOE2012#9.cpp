#include <iostream>
#include <string>
using namespace std;

int sizeOf(string x[]);
int sizeOf(string x);

int convert(string num) {
  if (num == "M") {
    return 1000;
  } else if (num == "D") {
    return 500;
  } else if (num == "C") {
    return 100;
  } else if (num == "L") {
    return 50;
  } else if (num == "X") {
    return 10;
  } else if (num == "V") {
    return 5;
  } else {
    return 1;
  } 
}

int main() {
  //Input
  string numeral = "";
  cout << "numeral: ";
  cin >> numeral;
  string nums[7] = {"M", "D", "C", "L", "X", "V", "I"};

  //Math
  //Find biggest numeral
  int biggest = 0;
  for (int c = 0; c < 7; c++) {
    if (numeral.find(nums[c]) != -1) {
      biggest = c;
      c = 100;
    }
  }

  int result = 0;
  int c = 0;
  while (c < numeral.length()) {

    //Find what to subtract
    int subtract = 0;
    while (numeral.substr(c, 1) != nums[biggest] && c < numeral.length()) {
      subtract += convert(numeral.substr(c, 1));
      c++;
    }

    //Count value of biggest
    while (numeral.substr(c, 1) == nums[biggest] && c < numeral.length()) {
      result += convert(numeral.substr(c, 1));
      c++;
    }

    //cout << subtract << " " << result << " " << biggest << "\n";
    result -= subtract;
    
    for (int i = biggest + 1; i < 7; i++) {
      if (numeral.find(nums[i], c) != -1) {
        biggest = i;
        i = 100;
      }
    }
  }

  cout << "Decimal Value: " << result;
}
//g++ -o MSOE2012#9.exe MSOE2012#9.cpp && ./MSOE2012#9.exe