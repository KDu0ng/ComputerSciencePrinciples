<h1>Handbook on Programming in ?????</h1>

**AP Computer Science Principles 2023-2024**

FirstName LastName

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

???





___





# 8. Conditional Operators

???





___





# 9. Logic Operators

???





___





# 10. Advanced Decision Structures

???





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