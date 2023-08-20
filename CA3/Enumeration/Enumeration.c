#include<stdio.h>
enum Bool{Sundar,Sathish = 10,Arjun};
int main()
{
    enum Bool a;
    a = Sathish;
    printf("%d\n",a);
    a = Arjun;
    printf("%d\n",a);
    a = Sundar;
    printf("%d",a);
    return 0;

}