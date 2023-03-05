#include<stdio.h>
#include<stdlib.h>


void add()
{
int a,b,c;
printf("Enter the value of A:");
scanf("%d",&a);
printf("Enter the value of B:");
scanf("%d",&b);
c = a+b;
printf("The addition of two numbers is %d\n",c);
}
int main()
{
int n,i;
printf("Enter the limit:");
scanf("%d",&n);
for (i=0;i<n;i++)
{
    add();
}
return 0;
}