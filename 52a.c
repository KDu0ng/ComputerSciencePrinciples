#include <stdio.h>

int main(void) {
  int scanhappy = 0;
  
  //Input length
  printf("Enter length: ");
  int length = 0;
  scanhappy = scanf("%d", &length);

  //Input width
  printf("Enter width: ");
  int width = 0;
  scanhappy = scanf("%d", &width);

  //Math
  int area = length * width;
  int perimeter = length * 2 + width * 2;

  //Output
  printf("The area is %d and the perimeter is %d", area, perimeter);
}
//gcc -o 52a.exe 52a.c && ./52a.exe