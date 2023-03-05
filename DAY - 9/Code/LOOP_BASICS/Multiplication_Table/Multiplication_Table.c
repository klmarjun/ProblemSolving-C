#include<stdio.h>
#include<conio.h>
int main()
{
int num,i,product;
printf( "\n Enter a number:");
scanf("%d",&num);
printf("The multiplication table of %d is:\n",num);
i = 1 ;
while (i<=10)
{
product= num*i;
printf( "%d * %d = %d \n",num,i,product);
i++ ;
}
return 0;
}