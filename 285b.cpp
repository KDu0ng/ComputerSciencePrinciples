#include <iostream>
#include <fstream>
using namespace std;

class Salesperson {
  int id;
  int code;
  int sales; 
  double comm; 

  public: 
    Salesperson(int i, int c, double s) {
      id = i;
      code = c;
      sales = s;
    }

    void calculate() {
      if (code == 5 || code == 8) {
        if (sales <= 5000) {
          comm = sales * 0.075;
        } else {
          comm = 5000 * 0.075 + (sales - 5000) * 0.085;
        }
      } else if (code == 17) { 
        if (sales <= 3500) {
          comm = sales * 0.095;
        } else {
          comm = 3500 * 0.095 + (sales - 3500) * 0.12;
        }
      } else {
        comm = -1;
      }
    }

    void print() {
      if (comm != -1) {
        cout << id << "\t\t" << code << "\t\t" << sales << "\t$" << comm << "\n";
      } else {
        cout << id << "\t\t" << code << "\t\t" << sales << "\tBad Code" << "\n";
      }
    }
};

int main() {
  cout << "Number\tCode\tSales\tCommission\n";
  ifstream file;
  file.open("data/285b.txt");
  int id = 0;
  while (file >> id) {
    int code = 0;
    file >> code;
    double sales = 0;
    file >> sales;
    Salesperson p = Salesperson(id, code, sales);
    p.calculate();
    p.print();
  }
}


//g++ -o 285b.exe 285b.cpp && ./285b.exe