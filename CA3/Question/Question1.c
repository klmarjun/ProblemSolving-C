#include<stdio.h>
/*void swap(int *n1 ,int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
  
}
int main() {
    int n1 = 20;
    int n2 = 68;
    printf("The numbers before swapping n1 and n2 %d %d \n",n1, n2);
    swap(&n1, &n2);
    printf("The numbers after swapping n1 and n2 %d %d",n1, n2);
    return 0;
}*/
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
    //temp = x;10,20
    //x = y;
    //y = temp;
    x = x+y;//30
    y = x-y;//10
    x = x-y;//40
    printf("num1:%d \nnum2:%d",x,y);
}