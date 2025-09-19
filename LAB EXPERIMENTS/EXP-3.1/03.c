//	WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include<stdio.h>

int main(){

int x1,x2,x3,y1,y2,y3;
int area;
  printf("enter x1: ");
  scanf("%d", &x1);
    printf("enter x2 : ");
  scanf("%d", &x2);
    printf("enter x3: ");
  scanf("%d", &x3);
  printf("enter y1: ");
  scanf("%d", &y1);
    printf("enter y2: ");
  scanf("%d", &y2);
    printf("enter y3: ");
  scanf("%d", &y3);
area=x1 *(y1-y2)+ x2*(y3-y1)+x3*(y1-y2);
printf("area = %d",area);

if (area==0)
{
 printf("\nthe given points are collinear\n");
}
else{
  printf("\nthe given points are not collinear \n");
}


return 0;
}