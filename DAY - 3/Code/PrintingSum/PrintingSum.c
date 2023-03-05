#include<stdio.h>
#include<stdlib.h>
int main()
{
int num1 ;
float num2;
double sum;
printf("Enter integer: ");
scanf("%d",&num1);
printf("Enter float: ");
scanf("%f", &num2);

sum = num1+num2;
printf("the sum is %lf",sum);
    return 0;
}