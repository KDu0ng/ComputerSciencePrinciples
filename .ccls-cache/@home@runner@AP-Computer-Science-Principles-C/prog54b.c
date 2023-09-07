#include <stdio.h>

int main(void) {
  //Input
  printf("Enter 4 three-digit numbers: ");
  int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);
  
  //Math
  int sum = num1 + num2 + num3 + num4;
  double average = sum / 4.0;
  
  //Output
  printf("The sum of the four numbers is %d\n\nThe average of the four numbers is %.2lf", sum, average);
}
//gcc -o prog54b.exe prog54b.c && ./prog54b.exe