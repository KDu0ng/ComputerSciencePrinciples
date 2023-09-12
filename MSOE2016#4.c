#include <stdio.h>
#include <math.h>

int main(void) {
  int scanhappy = 0;
  int len = 0;
  int arr[100];
  
  //Input
  printf("Enter number: ");
  int num = 0;
  scanhappy = scanf("%d", &num);
  int n = num;

  //Math
  while (num != 1) {
    for (int i = 2; i < num && len < 50; i++) {
      int count = 0;
      while (num % i == 0) {
        count++;
        num /= i;
      }
      if (count > 0) {
        arr[len] = i;
        arr[len + 1] = count;
        len += 2;
      }
    }
  }

  int result = 1;
  for (int i = 0; i < len; i += 2) {
    result *= (int)pow(arr[i], arr[i + 1] - 1) * (arr[i] - 1);
  }

  //Output
  printf("φ(%d) = %d", n, result);
  
}
//gcc -o MSOE2016#4.exe -lm MSOE2016#4.c && ./MSOE2016#4.exe