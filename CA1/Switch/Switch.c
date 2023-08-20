#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("One");
        break;

        case 2:
        printf("Two");
        break;

        default:
        printf("Default statement");
        break;
    }
}

