#include <stdio.h>
int main()
{
int n;
printf("Enter a digit between -100 to 100: ");
scanf("%d",&n);
if((n>0) && (n<=100))
{
printf(" Given number is in between 0 and 100");
}
else if((n>-100) && (n<0))
{
printf("Given number is in between -100 and 0");
}
else
{
printf("Please enter a number in the given range");
}
return 0;
}