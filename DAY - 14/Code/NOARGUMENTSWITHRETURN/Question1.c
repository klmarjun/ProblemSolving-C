//find out the square of the number
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int square();
void main()
{
    int res;
    printf("The Power of the number entered is %d",square());
}
int square()
{
    int i,power,p=2;
    printf("Enter Number:");
    scanf("%d",&i);
    power = i*i;
    return power;
}