#include<stdio.h>
int main()
{
int person[4]= {4,5,6,7},i;

for(i=0;i<4;i++)
{
    printf("the adress is %p and value is %d\n",&person[i],person[i]);
}    
    return 0;
}

