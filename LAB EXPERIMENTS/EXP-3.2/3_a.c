// WAP to print the pattern: //
/*
1
23
456
*/
#include <stdio.h>
void main()
{
  int i, j, num = 1;

  for (i = 1; i <= 3; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", num);
      num++;
    }
    printf("\n");
  }
}