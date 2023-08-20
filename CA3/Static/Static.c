#include<stdio.h>

void display();
int main()
{
    display();
    display();
    display();
    return 0;
}
 void display()
 {
    static int num = 10;
    num++;
    printf("%d\n",num);
 }