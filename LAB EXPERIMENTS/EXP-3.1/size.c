#include <stdio.h>

int main()
{

  printf("int : %u bytes\n", sizeof(int));

  printf("char : %u bytes\n", sizeof(char));

  printf("float : %u bytes\n", sizeof(float));

  printf("double : %u bytes\n", sizeof(double));

  printf("short : %u bytes\n", sizeof(short));

  printf("long : %u bytes\n", sizeof(long));
  
  printf("long long : %u bytes\n", sizeof(long long));

  return 0;
}