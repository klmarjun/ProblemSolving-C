#include <stdio.h>
 
int main()
{
    int i,num; 
    int even_sum = 0;
    int odd_sum = 0;
    printf("Enter NUmber: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even_sum = even_sum + i;
        }
        else
        {
            odd_sum = odd_sum + i;
        }
    }
    printf("\nThe sum of all Odd numbers  = %d", odd_sum);
    printf("\nThe sum of all Even numbers = %d", even_sum);
return 0;
}