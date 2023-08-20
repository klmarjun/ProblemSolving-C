#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("A is greater than C");
        }
        else
        {
            printf("A is greater than B");
        }
    }
}