//	WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.

#include<stdio.h>

int main(){

  
  int number, positive = 0, negative = 0, zero = 0;
  char another = 'Y';

  do
  {
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0)
    {
      positive++;
    }
    else if (number < 0)
    {
      negative++;
    }
    else
    {
      zero++;
    }

    printf("Do you want to Continue ? ");
    scanf(" %c", &another);

  } while (another == 'y' || another == 'Y');

  printf("Positive Numbers :%d\n", positive);
  printf("Negative  Numbers :%d\n", negative);
  printf("zero Numbers :%d\n", zero);
return 0;
}