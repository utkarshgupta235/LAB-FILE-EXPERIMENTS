// WAP to print the pattern://
/*
1
11
123
1331
14641
*/
#include <stdio.h> // Include the standard input/output header file.

void main()
{
  int no_row=5, c = 1, spaces, i, j; 

    

  for (i = 0; i < no_row; i++) 
  {
    for (spaces = 1; spaces <= no_row - i; spaces++) 
      printf("  ");

    for (j = 0; j <= i; j++) 
    {
      if (j == 0 || i == 0) 
        c = 1;
      else
        c = c * (i - j + 1) / j; 
      printf("% 4d", c);         
    }

    printf("\n"); 
  }
}