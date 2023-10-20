#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Player {
  public: 
    string name;
    int hits[7];
    int atbats[7];

    Player() {
      name = "";
    }

    Player(string n, int h[], int at[]) {
      name = n;
      for (int c = 0; c < 7; c++) {
        hits[c] = h[c];
        atbats[c] = at[c];
      }
    }

    double avg(int day) {
      return hits[day] / (double) atbats[day];
    }
};

int main() {
  Player players[8];
  int i = 0;
  ifstream input;
  input.open("data/505d.dat");
  
  string n = "";
  while (input >> n) {
    string l = "";
    input >> l;
    while (n.length() + l.length() + 1 < 14) {
      l.append(" ");
    }
    string name = n + " " + l;

    int hits[7];
    int bats[7];
    for (int c = 0; c < 7; c++) {
      input >> hits[c];
      input >> bats[c];
    }

    players[i] = Player(name, hits, bats);
    i++;
  }
  input.close();

  cout << setprecision(3) << fixed; 
  for (int c = 0; c < 8; c++) {
    cout << "\n" << players[c].name << "\t";
    for (int a = 0; a < 7; a++) {
      cout << players[c].avg(a) << "\t";
    }
  }

  int total = 0;
  for (int c = 0; c < 7; c++) {
    if (c == 0) {
      cout << "\n\nMonday\t\t";
    } else if (c == 1) {
      cout << "\nTuesday\t\t";
    } else if (c == 2) {
      cout << "\nWednesday\t";
    } else if (c == 3) {
      cout << "\nThursday\t";
    } else if (c == 4) {
      cout << "\nFriday\t\t";
    } else if (c == 5) {
      cout << "\nSaturday\t";
    } else if (c == 6) {
      cout << "\nSunday\t\t";
    }
    
    int tothit = 0;
    int totbat = 0;
    for (int a = 0; a < 8; a++) {
      //cout << "aaa " << players[a].hits[c] << "\n";
      tothit += players[a].hits[c];
      totbat += players[a].atbats[c];
    }
    total+= tothit;
    cout << tothit << "\t" << tothit / (double) totbat << "\n";
  }

  cout << "\nTotal hits\t" << total;
}
//g++ -o 505d.exe 505d.cpp && ./505d.exe