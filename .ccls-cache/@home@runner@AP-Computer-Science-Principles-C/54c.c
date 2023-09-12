#include <stdio.h>
#include <math.h>

int main(void) {
  //Create constants
  const double pi = 3.14159;
  
  //Input radius
  int scanhappy = 0;
  printf("Enter radius: ");
  double radius = 0;
  scanhappy = scanf("%lf", &radius);
  
  //Math
  double circumference = 2 * pi * radius;
  double area = pi * pow(radius, 2.0);
  
  //Output
  printf("The Radius of the circle = %.3lf\nThe Area of the circle = %.3lf\nThe Circumference of the circle = %.3lf", radius, area, circumference);
}
//gcc -o 54c.exe 54c.c && ./54c.exe