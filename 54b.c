#include <stdio.h>

int main(void) {
  //Input
  int scanhappy = 0;
  printf("Enter 4 three-digit numbers: ");
  int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
  scanhappy = scanf("%d", &num1);
  scanhappy = scanf("%d", &num2);
  scanhappy = scanf("%d", &num3);
  scanhappy = scanf("%d", &num4);
  
  //Math
  int sum = num1 + num2 + num3 + num4;
  double average = sum / 4.0;
  
  //Output
  printf("The sum of the four numbers is %d\n\nThe average of the four numbers is %.2lf", sum, average);
}
//gcc -o 54b.exe 54b.c && ./54b.exe