#include<stdio.h>
#include<stdlib.h>
int main()
{
float num1=5.2, num2;
double multiply ;
printf("Enter second num: ");
scanf("%f", &num2);
multiply = num1*num2;
printf("The Multiplication of %f and %f is %lf",num1 ,num2 , multiply);
    return 0;
}