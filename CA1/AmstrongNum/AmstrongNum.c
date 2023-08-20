#include<stdio.h>
int main()
{
int a,b,num,sum=0;
printf("Enter  anumber to check: ");
scanf("%d",&num);
b = num;
while (num>0)
{
    a=num%10;
    sum += a*a*a;
    num = num/10;

}
if (b == sum)
{
    printf("True");
}
else
{
    printf("False");
}
    return 0;
}