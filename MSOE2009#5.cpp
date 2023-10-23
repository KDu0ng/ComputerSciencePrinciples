#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  
  return true;
}

int main() {
  int num = 0;
  cout << "Enter number: ";
  cin >> num;

  if (isPrime(num)) {
    cout << "prime";
  } else {
    cout << "not prime";
  }
}

//g++ -o MSOE2009#5.exe MSOE2009#5.cpp && ./MSOE2009#5.exe