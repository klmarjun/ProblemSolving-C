/*#include<stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Adress %d",p);
    return 0;
}*/
#include<stdio.h>
int main()
{
    int ages[5] = {10,50,20,30,54};
    printf("%d\n",ages);
    printf("%d",&ages[0]);
}