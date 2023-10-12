#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;



int main() {
  int nums[19];
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    srand(time(0));
    sleep(1);
    nums[c] = rand() % 71 + 20;
  }

  //1. Print all nums
  cout << "1. Print out all numbers.\n";
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    cout << nums[c] << " ";
  }

  //2. Print with for-each loop
  cout << "\n\n2. Print out all numbers with for-each loop.\n";
  for (int n : nums) {
    cout << n << " ";
  }

  //3. Num in middle.
  cout << "\n\n3. The number in the middle of the array is:\n" << nums[sizeof(nums)/sizeof(int) / 2];

  //4. Avg of first, last, and middle nums.
  cout << "\n\n4. The average of the first, last, and middle numbers is:\n" << (nums[0] + nums[sizeof(nums)/sizeof(int) / 2] + nums[sizeof(nums)/sizeof(int) - 1]) / 3.0;

  //5. Find smallest and largest.
  cout << "\n\n5. The largest and the smallest numbers are:\n";
  int smallest = nums[0];
  int largest = nums[0];
  int sloc = 0;
  int lloc = 0;
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    if (nums[c] < smallest) {
      smallest = nums[c];
      sloc = c;
    }
    if (nums[c] > largest) {
      largest = nums[c];
      lloc = c;
    }
  }
  cout << "Smallest: " << smallest << "\nLargest: " << largest;

  //6. Switch the smallest and largest number
  cout << "\n\n6. Switch the largest and smallest numbers.\n";
  nums[sloc] = largest;
  nums[lloc] = smallest;
  cout << "Swapped places " << sloc << " and " << lloc;

  //7. Create new rand 1-10 and insert in middle.
  cout << "\n\n7. Create a new random number between 1 and 10 and insert it into the middle of the array.\n";
  int randnum = rand() % 10 + 1;
  nums[sizeof(nums)/sizeof(int) / 2] = randnum;
  for (int n : nums) {
    cout << n << " ";
  }

  //8. Add 10 to every number in the list.
  cout << "\n\n8. Add 10 to every number in the list.\n";
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    nums[c] += 10;
    cout << nums[c] << " ";
  }

  //9. Replace third element in array with 5 and print ousted.
  cout << "\n\n9. Replace the third element in the array with 5.\n";
  cout << "Removing " << nums[2] << " from the array.\n";
  nums[2] = 5;

  //10. Print nums in 50s.
  cout << "\n\n10. Print the numbers in the 50s.\n";
  for (int n : nums) {
    if (n >= 50 && n < 60) {
      cout << n << " ";
    }
  }

  //11. Print multiples of 4.
  cout << "\n\n11. Print the muultiples of 4.\n";
  for (int n : nums) {
    if (n % 4 == 0) {
      cout << n << " ";
    }
  }

  //12. Is there a 60 in the array.
  cout << "\n\n12. Is there a 60 in the list?\n";
  bool sixty = false;
  for (int n : nums) {
    if (n == 60) {
      cout << "yes";
      sixty = true;
      break;
    }
  }

  if (!sixty) {
    cout << "no";
  }

  //13. Is the array the same from from back to front.
  cout << "\n\n13. Is it the same from back to front?\n";
  bool pal = true;
  for (int c = 0; c < sizeof(nums)/sizeof(int); c++) {
    if (nums[c] != nums[sizeof(nums)/sizeof(int) - c - 1]) {
      pal = false;
    }
  }

  if (pal) {
    cout << "yes";
  } else {
    cout << "no";
  }

  //14. Nums greater than average.
  cout << "\n\n14. How many numbers are greater than the average?\n";
  double avg = 0;
  for (int n : nums) {
    avg += n;
  }
  avg /= sizeof(nums)/sizeof(int);

  int count = 0;
  for (int n : nums) {
    if (avg < n) {
      count++;
    }
  }
  cout << count << " numbers are greater than the average of " << avg;

  //15. How many nums are even.
  cout << "\n\n15. How many numbers are even?\n";
  count = 0;
  for (int n : nums) {
    if (n % 2 == 0) {
      count++;
    }
  }
  cout << count << " numbers are even";

  //16. Reverse the array
  cout << "\n\n16. Reverse the array.\n";
  int rev[sizeof(nums)/sizeof(int)];
  count = sizeof(nums)/sizeof(int) - 1;
  for (int n : nums) {
    rev[count] = n;
    count--;
  }

  cout << "The reverse array: \n";
  for (int n : rev) {
    cout << n << " ";
  }

  //17. Shift everything to the right.
  cout << "\n\n17. Shift everything to the right.\n";
  int last = rev[sizeof(rev)/sizeof(int) - 1];
  for (int c = sizeof(rev)/sizeof(int) - 1; c > 0; c--) {
    rev[c] = rev[c - 1];
  }
  rev[0] = last;

  cout << "After the shift: \n";
  for (int n : rev) {
    cout << n << " ";
  }

  //18. Sum of all digits of all elements
  cout << "\n\n18. Find the sum of all digits of all elements.\n";
  count = 0;
  for (int n : rev) {
    while (n > 0) {
      count += n % 10;
      n = n / 10;
    }
  }

  cout << "The total sum is " << count;
}
//g++ -o BigArray.exe BigArray.cpp && ./BigArray.exe