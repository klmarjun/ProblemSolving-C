#include<stdio.h>
#include<stdlib.h>
int sumofn();
void main()
{
    int res;
    res = sumofn();
    printf("The result is :",res);
}
int sumofn()
{
      int num, i = 0, sum = 0; 
    printf("Enter a number : ");  
    scanf("%d", &num);    
    while (i <= num) 
    {  
        sum = sum + i; 
        i++;  
    } 
    
    return sum;
}