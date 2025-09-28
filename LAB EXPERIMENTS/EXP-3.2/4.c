//	The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float pop=100000;
    //for-loop for 10 years
    for(i=1;i<=10;i++)
    {
        pop = pop - pop*0.1; //10 % of population
        printf("%d years ago : %d\n",i, (int)pop);
    }
}