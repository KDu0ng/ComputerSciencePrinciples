#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
  public:
    string name;
    int scores[5];

    Student() {
      name = "";
    }

    Student(string n, int s[]) {
      name = n;
      for (int c = 0; c < 5; c++) {
        scores[c] = s[c];
      }
    }

    double avg() {
      int sum = 0;
      for (int c = 0; c < 5; c++) {
        sum += scores[c];
      }
      return sum / 5.0;
    }

    string grade() {
      double s = avg();
      if (s >= 90) {
        return "A";
      } else if (s >= 80) {
        return "B";
      } else if (s >= 70) {
        return "C";
      } else if (s >= 60) {
        return "D";
      } else {
        return "F";
      }
    }

    void print() {
      for (int c = 0; c < 5; c++) {
        cout << scores[c] << "\t";
      }
    }

};

int main() {
  Student students[3];
  int i = 0;
  ifstream input;
  input.open("data/505b.dat");
  string n = "";
  while (input >> n) {
    string l = "";
    input >> l;
    while (n.length() + l.length() + 1 < 12) {
      l.append(" ");
    }
    string name = n + " " + l;

    int score[5]; 
    for (int c = 0; c < 5; c++) {
      input >> score[c];
    }
    
    students[i] = Student(name, score);
    i++;
  }

  cout << setprecision(1) << fixed;
  for (int c = 0; c < 3; c++) {
    cout << students[c].name << "\t";
    students[c].print();
    cout << "\t" << students[c].avg() << "\t" << students[c].grade() << "\n";
  }

  int grades[5] = {0,0,0,0,0};
  for (int c = 0; c < 3; c++) {
    if (students[c].grade().compare("A") == 0) {
      grades[0]++;
    } else if (students[c].grade().compare("B") == 0) {
      grades[1]++;
    } else if (students[c].grade().compare("C") == 0) {
      grades[2]++;
    } else if (students[c].grade().compare("D") == 0) {
      grades[3]++;
    } else if (students[c].grade().compare("F") == 0) {
      grades[4]++;
    }
  }

  cout << "\n" << setprecision(2) << fixed;
  for (int c = 0; c < 5; c++) {
    cout << "Test " << c + 1 << "\t\t";
    int sum = 0;
    for (int a = 0; a < 3; a++) {
      sum += students[a].scores[c];
    }
    cout << sum / 3.0 << "\t\t\t\t";

    if (c == 0) {
      cout << "A " << grades[0] << "\n";
    } else if (c == 1) {
      cout << "B " << grades[1] << "\n";
    } else if (c == 2) {
      cout << "C " << grades[2] << "\n";
    } else if (c == 3) {
      cout << "D " << grades[3] << "\n";
    } else if (c == 4) {
      cout << "F " << grades[4] << "\n";
    }
  }
}
//g++ -o 505b.exe 505b.cpp && ./505b.exe