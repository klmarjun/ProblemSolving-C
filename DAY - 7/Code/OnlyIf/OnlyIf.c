#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("Enter any number between 0 to 15: ");
    scanf("%d",&a);
    if (a>=0 && a<5)
    {
    printf("The value of number you entered is between 0 to 5");
    }
    if (a>=5 && a<10)
    {
    printf("The value of the number you entered is between 5 to 10");
    }
    if (a>=10 && a<15)
    {
    printf("The value you the number you entered is between 10 to 15 ");
    }

    return 0;
}