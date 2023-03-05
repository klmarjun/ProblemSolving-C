//Average of three floating point
//Question 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float avg();
void main()
{
    int res;
    printf("The average of three numbers is %0.2f",avg());
}
float avg()
{
float num1,num2,num3;
float avg;
printf("Enter Number 1:");
scanf("%f",&num1);
printf("Enter Number 2:");
scanf("%f",&num2);
printf("Enter Number 3:");
scanf("%f",&num3);
avg = (num1+num2+num3)/3;
return avg;
}