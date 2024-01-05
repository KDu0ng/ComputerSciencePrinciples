#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Base unit 
// Mass - gram
// Length - meters
unordered_map <string, double> conversions;

void initializeConversions() {
  //Length conversions
  conversions.insert({"meter", 1});            
  conversions.insert({"kilometer", 0.001});
  conversions.insert({"centimeter", 100});
  conversions.insert({"millimeter", 1000});
  conversions.insert({"foot", 3.28084});
  conversions.insert({"yard", 1.09361});
  conversions.insert({"mile", 0.000621371});
  conversions.insert({"inch", 39.3701});
  conversions.insert({"nautical mile", 0.000539957});
  conversions.insert({"micrometer", 1000000});    
  conversions.insert({"nanometer", 1000000000});

  //Mass conversions
  conversions.insert({"gram", 1});
  conversions.insert({"kilogram", 0.001});
  conversions.insert({"centigram", 100});
  conversions.insert({"milligram", 1000});  
  conversions.insert({"metric ton", 0.000001});
  conversions.insert({"microgram", 1000000}); 
  conversions.insert({"imperial ton", 0.00000098421});     
  conversions.insert({"us ton", 0.0000011023});      
  conversions.insert({"stone", 0.000157473});    
  conversions.insert({"pound", 0.00220462});    
  conversions.insert({"ounce", 0.035274});    
}

double convert(double num, string from, string to) {
  return num * conversions[from] * conversions[to];
}

bool validL(string s) {
  return s == "meter" || s == "kilometer" || s == "centimeter" || s == "millimeter" || s == "foot" || s == "nanometer" || s == "micrometer" || s == "inch" || s == "nautical mile" || s == "mile" || s == "yard";
}

int main() {
  initializeConversions();
  bool cont = true;
  while (cont) {
    string select = "";
    while (select != "0" || select != "1") {
      cout << "What kind of measurement are you converting in?\n";
      cout << "[0] Length\n";    
      cout << "[1] Mass\n";
      cout << "Enter a number: ";
      cin >> select;
    }

    string from = "";
    string to = "";
    int num = 0;
    if (select == "0") {
      // Select from
      while (!validL(from)) {
        cout << "What are you converting from?\nWe support:\n";
        cout << "- Kilometer\n";    
        cout << "- Meter\n";      
        cout << "- Centimeter\n";      
        cout << "- Millimeter\n";
        cout << "- Micrometer\n";
        cout << "- Nanometer\n";
        cout << "- Inch\n";
        cout << "- Foot\n";
        cout << "- Yard\n";
        cout << "- Mile\n";
        cout << "- Nautical mile\n";
        cout << "- Enter the original measurement: ";
        cin >> from;
        from = from.tolower();
        if (!validL(from)) {
          cout << "Invalid measurement.";
        }
      }

      // Select num
      
    } else if (select == "1") {
      
    }
  }
  
}

//g++ -o unitconverter.exe unitconverter.cpp && ./unitconverter.exe