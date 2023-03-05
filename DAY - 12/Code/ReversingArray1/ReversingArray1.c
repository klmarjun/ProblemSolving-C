#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
 int a[15],i,n;
 return 0;
// printf("\n The value in the position 0 is %d",a[3]);
 printf("Enter the number of values:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf("Enter the value for a[%d]:",i);
 scanf("%d",&a[i]);
 }
 for(i=n-1;i>=0;i--)
 printf("\n%d",a[i]);
 return 0;
 }
