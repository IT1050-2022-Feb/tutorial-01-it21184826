/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark,i;
  float avg,sum;

  for (i=0;i<2;++i)
  {
    printf("Enter the marks of subject %d :",i+1);
    scanf("%d",&mark);
    sum=sum+mark;
  }
  avg=sum/2.0;
  printf("Your average marks is %.2f",avg);
  
  return 0;
}

