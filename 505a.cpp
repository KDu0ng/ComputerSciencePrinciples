#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int points(int books) {
  if (books > 6) {
    return 75 + (books - 6) * 20;
  } else if (books > 3) {
    return 30 + (books - 3) * 15;
  } else {
    return books * 10;
  }
}

double avg(int books[]) {
  int sum = 0;
  for (int c = 0; c < 5; c++) {
    sum += points(books[c]);
  }
  return sum / 5.0;
}

int winner(int books[]) {
  int max = 0;
  for (int c = 0; c < 5; c++) {
    if (books[max] < books[c]) {
      max = c;
    }
  }
  return max;
}

int main() {
  string name[5];
  int books[5];
  int i = 0;
  
  ifstream input;
  input.open("data/505a.txt");
  string n = "";
  while (input >> n) {
    string l = "";
    input >> l;
    while (n.length() + l.length() + 1 < 13) {
      l.append(" ");
    }
    name[i] = n + " " + l;
    input >> books[i];
    i++;
  }
  input.close();

  cout << "Name\t\t\t" << "Books\t" << "Points" << "\n";
  for (int c = 0; c < 5; c++) {
    cout << name[c] << "\t" << books[c] << "\t\t" << points(books[c]) << "\n";
  }

  cout << "\nAverage points per reader = " << avg(books);
  cout << "\nThe winner of the contest is " << name[winner(books)];
}
//g++ -o 505a.exe 505a.cpp && ./505a.exe