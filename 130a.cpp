#include <iostream>
#include <cmath>
using namespace std;

int main() {
  cout << "Hailstone\nThis program computes Hailstone sequences.\nEnter a number: ";
  int num = 0;
  cin >> num;

  int steps = 0;
  while (num != 1) {
    if (num % 2 == 0) {
      cout << num << " is even, so I take half = " << num / 2 << "\n";
      num /= 2;
    } else {
      cout << num << " is odd, so I make 3n+1 = " << num * 3 + 1 << "\n";
      num = num * 3 + 1;
    }
    steps++;
  }

  cout << "The process took " << steps << " steps to reach 1.";
}
//g++ -o 130a.exe 130a.cpp && ./130a.exe