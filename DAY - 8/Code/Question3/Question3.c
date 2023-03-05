/*The price for one copy of a software package is Rs 5000/-. The discount for the software depends 
on the volume as shown in the table below
Number of copies Discount
num < 5 No discount
num<10 10%
num < 50 15%
num >=50 20%
Write a program to calculate the cost with the number of copies of the softwarepackage provided 
by the user at the prompt
amount-percent/amount*amount*/
#include<stdio.h>
int main()
{
int num,perc,price;
float res;
price = 5000;
printf("Enter the no of Copies: ");
scanf("%d",&num);
if (num<5)
{
    res = num*price;
    printf("The price is rs. %f",res);
}
else if(num >= 5 && num<10 )
{
    perc = 10;
    price *= num ;
    res = price - ((float)perc*price/100);
    
    printf("The price is rs. %f",res);
}
else if(num >= 10 && num<50 )
{
    perc = 15;
    price *= num ;
    res = price - ((float)perc*price/100);
    printf("The price is rs. %f",res);
}
else if(num >= 50)
{
    perc = 20;
    price *= num ;
   res = price - ((float)perc*price/100);
    
    printf("The price is rs. %f",res);
}
else
{
    printf("Sorry.. Invalid input");
}
    return 0;
}