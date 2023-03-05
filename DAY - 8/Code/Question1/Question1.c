/*A function is defined as follows:
f(x) = { 10x2-5x+4, if x<=0
{ 10x2 +5x+4, if x>0*/
#include<stdio.h>
int main()
{
int x,a,r;
printf("Enter The value of 'X':");
scanf("%d",&x);
if (x<=0 )
{
    a = 10*x*2-5*x+4 ;
    printf("The value of X is %d",a);
}
else if(x>0)
{
    r = 10*x*2 +5*x+4 ;
    printf("The value of X is %d",r);

}
else
{
    printf("Please enter an valid input");
}
    return 0;
}
