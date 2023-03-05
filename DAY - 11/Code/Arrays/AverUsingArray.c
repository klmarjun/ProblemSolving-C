#include<stdio.h>
int main()
{
int num[4],i;
float average;
float sum = 0;
for(i=0;i<4;i++)
{
printf("Enter number:");
scanf("%d",&num[i]);
sum = sum+num[i];
}
average = sum/i;
printf("The average is :%0.2f",average);
return 0;
}