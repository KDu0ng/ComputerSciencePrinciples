<h1>Handbook on Programming in C++</h1>

**AP Computer Science Principles 2023-2024**

Kevin Duong

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->




___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
  - [15.3 Structures](#153-structures)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running
Hello world program:
```C++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

Input "g++ -o FILENAME.exe FILENAME.cpp && ./FILENAME.exe" into shell.



___





# 2. Data Types


| Data | Type	Size | Description | 
|------|------|------|
| boolean	| 1 byte	| Stores true or false values | 
| char	| 1 byte	| Stores a single character/letter/number, or ASCII values | 
| int	| 2 or 4 bytes	| Stores whole numbers, without decimals | 
| float	| 4 bytes	| Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits | 
| double	| 8 bytes	| Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits | 

```C++
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String
```
Also strings:
```C++
// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello";

// Output string value
cout << greeting;
```




___





# 3. Console I/O

cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

In the following example, the user can input a number, which is stored in the variable x. Then we print the value of x:
```C++
int x; 
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value
```

The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

```C++
#include <iostream>
#include <fstream>
```

There are three classes included in the fstream library, which are used to create, write or read files:

Class	Description
ofstream - Creates and writes to files
ifstream - Reads from files
fstream - A combination of ofstream and ifstream: creates, reads, and writes to files

To create a file, use either the ofstream or fstream class, and specify the name of the file.

To write to the file, use the insertion operator (<<).

```C++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
}
```


To read from a file, use either the ifstream or fstream class, and the name of the file.

Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file:

```C++
// Create a text string, which is used to output the text file
string myText;

// Read from the text file
ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, myText)) {
  // Output the text from the file
  cout << myText;
}

// Close the file
MyReadFile.close();
```
___





# 4. Arithmetic Operations


| Operator | Name	| Description	| Example |
|------|------|------|------|
| +	| Addition | Adds | together two values	| x + y	| 
| -	| Subtraction	| Subtracts one value from another | x - y | 
| *	| Multiplication | Multiplies two values | x * y | 
| /	| Division | Divides one value by another	| x / y | 	
| %	| Modulus	| Returns the division remainder | x % y | 	
| ++ | Increment | Increases the value of a variable by 1	| ++x | 	
| -- | Decrement | Decreases the value of a variable by 1	| --x | 





___





# 5. Assignment Operations


| Operator	| Example	| Same As | 
|------|------|------|
| =	| x = 5	| x = 5	| 
| +=	| x += 3	| x = x + 3	| 
| -=	| x -= 3	| x = x - 3	| 
| *=	| x *= 3	| x = x * 3	| 
| /=	| x /= 3	| x = x / 3	| 
| %=	| x %= 3	| x = x % 3	| 
| &=	| x &= 3	| x = x & 3	| 
| ^=	| x ^= 3	| x = x ^ 3	| 
| >>=	| x >>= 3	| x = x >> 3 | 
| <<=	| x <<= 3| 	x = x << 3 | 





___





# 6. Comments

Single-line comments start with two forward slashes (//).

Any text between // and the end of the line is ignored by the compiler (will not be executed).

This example uses a single-line comment before a line of code:

```C++
// This is a comment
cout << "Hello World!";
```


Multi-line comments start with /* and ends with */.

Any text between /* and */ will be ignored by the compiler:

```C++
/* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!";
```

___





# 7. Decision Structures

C++ has the following conditional statements:

1. Use "if" to specify a block of code to be executed, if a specified condition is true
2. Use "else" to specify a block of code to be executed, if the same condition is false
3. Use "else if" to specify a new condition to test, if the first condition is false
4. Use "switch" to specify many alternative blocks of code to be executed

Example:
```C++
int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y";
} else if (x == y) {
  cout << "x equals y";
} else {
  cout << "x is less than y";
}
```


___





# 8. Conditional Operators

C++ supports the usual logical conditions from mathematics:

Less than: a < b

Less than or equal to: a <= b

Greater than: a > b

Greater than or equal to: a >= b

Equal to a == b

Not Equal to: a != b



___





# 9. Logic Operators


| Operator | Name	| Description	| Example	| 
|----------|------|-------------|---------|
| && | Logical and | Returns true if both statements are true | x < 5 &&  x < 10	| 
|  //	 | Logical or	| Returns true | if one of the statements is true | x < 5 // x < 4	| 
| !	| Logical not	| Reverse the result, returns false if the result is true | !(x < 5 && x < 10) | 





___





# 10. Advanced Decision Structures

Use the "switch" statement to select one of many code blocks to be executed.

Syntax:

```C++
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
This is how it works:

The switch expression is evaluated once.
The value of the expression is compared with the values of each case.
If there is a match, the associated block of code is executed.
The example below uses the weekday number to calculate the weekday name:

```C++
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
```

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements:

```C++
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
```
___





# 11. String Methods

To get the length of a string, use the length() or size() function:
```C++
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
```
To change the value of a specific character in a string, refer to the index number, and use single quotes:
```C++
string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello
```

Use substr(start pos, length) to grab a part of a string:
```C++
string myString = "Hello";
cout << myString.substr(1, 3);
// Outputs ell
```

Use find(str, start pos) to search for a string:
```C++
string myString = "Hello";
string f = "ell";
cout << myString.find(f);
// Outputs 1
```
___





# 12. Random Generation

rand() returns a value between 0 and RAND_MAX:
```C++
v1 = rand() % 100;         // v1 in the range 0 to 99
v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014 
```


___





# 13. Looping Structures

The while loop loops through a block of code as long as a specified condition is true:
```C++
while (condition) {
  // code block to be executed
}
```

In the example below, the code in the loop will run, over and over again, as long as a variable (i) is less than 5:
```C++
int i = 0;
while (i < 5) {
  cout << i << "\n";
  i++;
}
```

The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
```C++
do {
  // code block to be executed
}
while (condition);
```


When you know exactly how many times you want to loop through a block of code, use the for loop instead of a while loop:
```C++
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```
  
Statement 1 is executed (one time) before the execution of the code block.

Statement 2 defines the condition for executing the code block.

Statement 3 is executed (every time) after the code block has been executed.

The example below will print the numbers 0 to 4:
```C++
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
```
___





# 14. Functions/Methods

To create (often referred to as declare) a function, specify the name of the function, followed by parentheses ().

To call a function, write the function's name followed by two parentheses () and a semicolon ;

In the following example, myFunction() is used to print a text (the action), when it is called:
```C++
Inside main, call myFunction():

// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"
```


Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

The following example has a function that takes a string called fname as parameter. When the function is called, we pass along a first name, which is used inside the function to print the full name:
```C++
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
```


The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int, string, etc.) instead of void, and use the return keyword inside the function:
```C++
int myFunction(int x) {
  return 5 + x;
}

int main() {
  cout << myFunction(3);
  return 0;
}

// Outputs 8 (5 + 3)
```


You can also pass a reference to the function. This can be useful when you need to change the value of the arguments:
```C++
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

There are two ways to define functions that belongs to a class:

1. Inside class definition
2. Outside class definition

In the following example, we define a function inside the class, and we name it "myMethod".

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):

```C++
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```

To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

```C++
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```

You can also add parameters:
```C++
#include <iostream>
using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj; // Create an object of Car
  cout << myObj.speed(200); // Call the method with an argument
  return 0;
}
```
___





# 15. Elementary Data Structures

To create a class, use the class keyword:

Create a class called "MyClass":
```C++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
```


To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object:

Create an object called "myObj" and access the attributes:

```C++
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}
```


In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

1. derived class (child) - the class that inherits from another class
2. base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):

```C++
// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}
```

## 15.1 Arrays/Lists

Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

```C++
string cars[4];
```

We have now declared a variable that holds an array of four strings. To insert values to it, we can use an array literal - place the values in a comma-separated list, inside curly braces:

```C++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
```

To create an array of three integers, you could write:

```C++
int myNum[3] = {10, 20, 30};
```

You access an array element by referring to the index number inside square brackets [].

This statement accesses the value of the first element in cars:

```C++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0];
// Outputs Volvo
```

You can loop through the array elements with the for loop:

```C++
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
  cout << myNumbers[i] << "\n";
}
```

To get the size of an array, you can use the sizeof() operator:

```C++
int myNumbers[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumbers);
```
However, This returns the size in bytes. Divide it by sizeOf(datatype) to find actual length.

## 15.2 Matrices

A multi-dimensional array is an array of arrays.

To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have:

```C++
string letters[2][4];
```

As with ordinary arrays, you can insert values with an array literal - a comma-separated list inside curly braces. In a multi-dimensional array, each element in an array literal is another array literal.

```C++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
```

Each set of square brackets in an array declaration adds another dimension to an array. An array like the one above is said to have two dimensions.


To change the value of an element, refer to the index number of the element in each of the dimensions:

```C++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};
letters[0][0] = "Z";

cout << letters[0][0];  // Now outputs "Z" instead of "A"
```

To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.

The following example outputs all elements in the letters array:

```C++
string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
};

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
}
```

## 15.3 Structures

Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

To create a structure, use the struct keyword and declare each of its members inside curly braces.

After the declaration, specify the name of the structure variable (myStructure in the example below):

```C++
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable
Access Structure Members
To access members of a structure, use the dot syntax (.):
```

Assign data to members of a structure and print it:

```C++
// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
One Structure in Multiple Variables
You can use a comma (,) to use one structure in many variables:

struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
```

This example shows how to use a structure in two different variables:

Use one structure to represent two cars:

```C++
struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
```

By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

To create a named structure, put the name of the structure right after the struct keyword:

```C++
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```

To declare a variable that uses the structure, use the name of the structure as the data type of the variable:

```C++
myDataType myVar;
```

Use one structure to represent two cars:

```C++
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
```
___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)