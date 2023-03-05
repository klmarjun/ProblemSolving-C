// Write a program to print value from 10 to 0
#include<stdio.h>
int main()
{
    int num = 10;
    while (num<11 && num>=0)
    {
        printf("%d\n",num);
        num-- ;
    }

    return 0;
}