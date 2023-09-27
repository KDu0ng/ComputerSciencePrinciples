#include <stdio.h>
#include <math.h>

int main(void) {
  //Input
  double rate = 0, amount = 0, timescomp = 0, days = 0;
  int scanhappy = 0;
  printf("Enter amount saved: ");
  scanhappy = scanf("%lf", &amount);
  printf("Enter interest rate: ");
  scanhappy = scanf("%lf", &rate);
  printf("Enter time compounded per year: ");
  scanhappy = scanf("%lf", &timescomp);
  printf("Enter number of days of interest: ");
  scanhappy = scanf("%lf", &days);
  
  //Math
  double savings = amount * ((pow(1 + ((0.01 * rate) / timescomp), ((timescomp * days) / 365))));

  double interest = savings - amount;
  
  //Output
  printf("The interest earned is $%.2lf \nThe total amount in savings is now $%.2lf", interest, savings);
}
//gcc -o 58h.exe -lm 58h.c && ./58h.exe