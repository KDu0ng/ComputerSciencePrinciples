#include <stdio.h>

int main(void) {
  int scanhappy = 0;
  
  //Input times
  printf("Enter first time: ");
  int time1 = 0;
  scanhappy = scanf("%d", &time1);
  
  printf("Enter second time: ");
  int time2 = 0;
  scanhappy = scanf("%d", &time2);

  //Math
  int time1m = time1 % 100;
  int time1h = time1 / 100;
  int time2m = time2 % 100;
  int time2h = time2 / 100;
  
  if (time1h > time2h) {
    time2h += 23;
  }
  int hours = time2h - time1h;

  if (time1m > time2m) {
    time2m += 60;
    hours--;
    if (hours < 0) {
      hours = 23;
    }
  }
  int minutes = time2m - time1m;

  //Output
  printf("%d hours and %d minutes", hours, minutes);
}
//Isn't the time from 17:30 to 9:00 15 hours and 30 minutes?
//gcc -o 72t.exe 72t.c && ./72t.exe