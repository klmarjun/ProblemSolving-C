#include<stdio.h>
int main()
{
    int i=1,n,f,f1,f2;
    printf("Enter Number of Fibonacci Values Needed : ");
    scanf("%d",&n);
    f=0;
    f1=1;
    f2=1;
    while(i<=n)
    {
        i++;
        printf("%d\n",f);
        f1=f2;
        f2=f;
        f=f1+f2;
    }
    
    return 0;
}