//	WAP to print the multiplication table of the number entered by the user. It should be in the correct formatting.   Num * 1 = Num 

#include<stdio.h>

int main(){

  int n;
  printf("Enter number : ");
  scanf("%d",&n);

  for (int i = 1; i < 11; i++)
  {
   printf("%d x %d = %d\n",n,i,n*i);
  }
  
return 0;
}