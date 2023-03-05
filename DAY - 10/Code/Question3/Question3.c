#include<stdio.h>

int main() 
    {
    int num,count=0,tofind;
    int res;
    printf("Enter number: ") ;
    scanf("%d",&num);
    printf("Enter any digit to find the occurence: "); 
    scanf("%d",&tofind);
    while(num) 
    {
        res = num%10; 
        if(res == tofind)
        {
        count++;
        }
        num /= 10; 
    }
    printf("%d",count);
    return 0;
}