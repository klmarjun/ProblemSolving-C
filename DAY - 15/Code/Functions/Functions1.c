//Function with no argument and no return value
#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
int num1,num2,res;
printf("Enter First number :");
scanf("%d",&num1);
printf("Enter Second number :");
scanf("%d",&num2);
res = num1+num2;
printf("Adding %d and %d gives %d",num1,num2,res);
}