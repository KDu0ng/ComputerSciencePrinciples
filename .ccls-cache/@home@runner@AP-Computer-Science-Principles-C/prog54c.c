#include <stdio.h>
#include <math.h>

int main(void) {
  //Create constants
  const double pi = 3.14159;
  
  //Input radius
  printf("Enter radius: ");
  double radius = 0;
  scanf("%lf", &radius);
  
  //Math
  double circumference = 2 * pi * radius;
  double area = pi * pow(radius, 2.0);
  
  //Output
  printf("The Radius of the circle = %.3lf\nThe Area of the circle = %.3lf\nThe Circumference of the circle = %.3lf", radius, area, circumference);
}
//gcc -o prog54c.exe prog54c.c && ./prog54c.exe