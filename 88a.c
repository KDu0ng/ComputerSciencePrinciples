#include <stdio.h>
#include <math.h>

int abs(int x);

int main(void) {
  int scanhappy = 0;
  
  //Input length
  printf("Enter number 1: ");
  int num1 = 0;
  scanhappy = scanf("%d", &num1);

  //Input width
  printf("Enter number 2: ");
  int num2 = 0;
  scanhappy = scanf("%d", &num2);

  //Math
  int sum = num1 + num2;
  int difference = num1 - num2;
  int product = num1 * num2;
  double average = sum / 2.0;
  int absv = abs(difference);
  int max = 0;
  int min = 0;
  if (num1 > num2) {
    max = num1;
    min = num2;
  } else {
    min = num1;
    max = num2;
  }

  //Output
  printf("Original numbers were %d and %d", num1, num2);
  printf("\nSum = %d\nDifference = %d\nProduct = %d\nAverage = %.1lf\nAbsolute value = %d\nMaximum = %d\nMinimum = %d", sum, difference, product, average, absv, max, min);
  
}
//gcc -o 88a.exe 88a.c && ./88a.exe