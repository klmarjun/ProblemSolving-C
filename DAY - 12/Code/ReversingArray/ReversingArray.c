#include<stdio.h>
#include<conio.h>
int main()
{
 int a[4]={10,4,8,56};
 printf("\n The value in the position 0 is %d",a[0]);
 return 0;
 }
#include<stdio.h>
#include<conio.h>
int main1()
{
 int a[15],i,n;
// printf("\n The value in the position 0 is %d",a[3]);
 printf("Enter the number of values:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("Enter the value for a[%d]:",i);
 scanf("%d",&a[i]);
 }
 for(i=n-1;0 <=i;i--)
 printf("\n%d",a[i]);
 return 0;
 }