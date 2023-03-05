#include<stdio.h>
#include<stdlib.h>
float sum(int ,float);
void main()
{
    int a;
    float b,c;
    printf("Enter the value of Num1 :");
    scanf("%d",&a);
    printf("Enter the value of Num2 :");
    scanf("%f",&b);
    printf("The sum of a and b is %0.2f",sum(a,b));
    
    
}
float sum(int a,float b)
{
    return (a+b);
}