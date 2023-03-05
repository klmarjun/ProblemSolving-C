// Print only even numbers from 1 to 20
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num = 0;
    while(num<=20)
    {
        if(num%2==0)
        {
            printf("Even NUmber:%d\n",num);
            num++ ;
        }
        else
        {
             printf("Odd NUmber:%d\n",num);
            num++ ;
        }
        
    }
return 0;
    }