/*
1. Function Declaration
2. Function Calling
3. Function Definition 
*/

#include<stdio.h>
#include<stdlib.h>
//function calling
//void is used her because noo return values
void add();
int main()
{
//fucntion calling
add();
return 0;
}
//function definition
void add()
{
    int a,b,c;
    printf("Enter the value of A:");
    scanf("%d",&a);
    printf("Enter the value of B:");
    scanf("%d",&b);
    c = a+b;
    printf("The addition of two numbers is %d\n",c);
}

