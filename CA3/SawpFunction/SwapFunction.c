#include<stdio.h>
void swap();
int main()
{
    int num1,num2;
    printf("Enter value for num1 and num2: ");
    scanf("%d%d",&num1,&num2);
    swap(num1,num2);
    return 0;
}
void swap(int x,int y,int temp)
{
    temp = x;
    x = y;
    y = temp;
    printf("num1:%d \nnum2:%d",x,y);
}