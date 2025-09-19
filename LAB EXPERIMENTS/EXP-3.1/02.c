//	WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).

#include<stdio.h>

int main(){

float height,weight,BMI;
printf("enter height (in metres): ");
scanf("%f",&height);
printf("enter weight (in kgs): ");
scanf("%f",&weight);

BMI=(float) weight / (height * height) ;
printf("%f\n", BMI);
if(BMI<15){
  printf("STARVATION\n");
}
if (BMI>15.1 && BMI<17.5)
{
  printf("ANOREXIC\n");}

  if(BMI>17.6 && BMI<18.5){
  printf("UNDERWEIGHT\n");
  }
   if(BMI>18.6 && BMI<24.9){
  printf("IDEAL\n");
  }
   if(BMI>25 && BMI<25.9){
  printf("OVERWEIGHT\n");
  }
   if(BMI>30 && BMI<39.9){
  printf("OBESE\n");
  }
   if(BMI>40){
  printf("MORBIDITY OBESE\n");
  }

return 0;
}