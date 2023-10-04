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

Use "if" to specify a block of code to be executed, if a specified condition is true
Use "else" to specify a block of code to be executed, if the same condition is false
Use "else if" to specify a new condition to test, if the first condition is false
Use "switch" to specify many alternative blocks of code to be executed

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
The break and default keywords are optional, and will be described later in this chapter.
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

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





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