#include<stdio.h>
void sumofn( int num, int i , int sum );
void main()
{
    int num,i = 0, sum = 0; 
    printf("Enter limit : ");  
    scanf("%d", &num);    
    while (i <= num) 
    {  
        sum = sum + i; 
        i++;  
    }  
    sumofn(num,i,sum);
}
void sumofn( int num, int i , int sum)
{
    printf("The Sum of n numbers is %d",sum);
}