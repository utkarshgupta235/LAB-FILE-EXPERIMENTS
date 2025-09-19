#include<stdio.h>

void main(){
printf("***CONVERSION OF TEMPERATURE FROM CELCIUS TO FAHRENHEIT\n");
  float celcius, fahrenheit ;
  printf("Enter the temperature in celcius : ");
  scanf("%f",&celcius);

  fahrenheit= (celcius * 9/5 ) +32;
printf("Temperature in fahrenheit is : %f",fahrenheit);

}