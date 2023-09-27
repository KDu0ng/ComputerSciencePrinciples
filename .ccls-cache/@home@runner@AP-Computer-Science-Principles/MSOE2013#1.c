#include <stdio.h>
#include <math.h>

int main(void) {
  //Input
  int scanhappy = 0;
  double r1 = 0, r2 = 0, r3 = 0, voltage;
  printf("Enter first resistance: ");
  scanhappy = scanf("%lf", &r1);
  printf("Enter second resistance: ");
  scanhappy = scanf("%lf", &r2);
  printf("Enter third resistance: ");
  scanhappy = scanf("%lf", &r3);
  printf("Enter voltage: ");
  scanhappy = scanf("%lf", &voltage);
  
  //Math
  double a1 = voltage / r1;
  double a2 = voltage / r2;
  double a3 = voltage / r3;
  double pres = voltage / (a1 + a2 + a3);
  
  //Output
  printf("The parallel resistance is %.2lfΩ", pres);
 
}
//gcc -o MSOE2013#1.exe -lm MSOE2013#1.c && ./MSOE2013#1.exe