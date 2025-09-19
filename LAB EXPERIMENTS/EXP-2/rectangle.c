#include<stdio.h>

void main(){

  printf("****TO FIND PERIMETER AND AREA OF A RECTANGLE\n");
int length, breadth , area , perimeter ;
printf("enter length : ");
scanf("%d",&length);

printf("enter breadth: ")  ;
scanf("%d",&breadth);

perimeter= 2*(length+breadth);
printf("Perimeter of the rectangle is : %d\n",perimeter);
area= length * breadth ;
printf("Area of the rectangle is : %d\n", area);

}