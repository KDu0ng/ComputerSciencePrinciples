#include <stdio.h>

int main(void) {
  //Input length
  printf("Enter length: ");
  int length = 0;
  scanf("%d", &length);

  //Input width
  printf("Enter width: ");
  int width = 0;
  scanf("%d", &width);

  //Math
  int area = length * width;
  int perimeter = length * 2 + width * 2;

  //Output
  printf("The area is %d and the perimeter is %d", area, perimeter);
}
//gcc -o prog52a.exe prog52a.c && ./prog52a.exe