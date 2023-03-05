#include<stdio.h>
#include<stdlib.h>
int main()  
{  
    int num, i = 0, sum = 0; 
    printf("Enter a number : ");  
    scanf("%d", &num);    
    while (i <= num) 
    {  
        sum = sum + i; 
        i++;  
    } 
    printf(" \n Sum of first %d natural number is : %d", num, sum);  
    return 0;  
}  