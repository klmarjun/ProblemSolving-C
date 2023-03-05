#include<stdio.h>
#include<conio.h>
int main()
{
 float price[4];
 int i;
 int num;
 printf("Enter how many times you want to run this loop: ") ;
scanf("%d",&num);
 for(i=0;i<num;i++)
 {
     printf("Enter Number: ");
 scanf("%f",&price[i]);
  }
for(i=0;i<num;i++)
{
     printf("\n The adress is %p and price of the product is %0.2f",&price[i],price[i]);
}
return 0;
}