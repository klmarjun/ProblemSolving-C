#include<stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
 
    printf("Input the values for Number1 and Number2 : ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
        {
            printf("\nNumber1 and Number2 are equal");
        }
    else
        {
            printf("\nNumber1 and Number2 are not equal");
        }
    return 0;
}