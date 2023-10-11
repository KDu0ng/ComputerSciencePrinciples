#include <iostream>
using namespace std;

int main() {
  int nums[19];
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    nums[c] = rand() % 71 + 20;
  }

  //1. Print all nums
  cout << "1. Print out all numbers.\n";
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    cout << nums[c] << " ";
  }

  //2. Print with for-each loop
  cout << "\n2. Print out all numbers with for-each loop.\n";
  for (int n : nums) {
    cout << n << " ";
  }
  
}
//g++ -o BigArray.exe BigArray.cpp && ./BigArray.exe