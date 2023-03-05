#include <stdio.h>
int main()
{
for(int i = 10; i <= 100; i++)
{
if(i % 5 == 0 && i % 8 == 0)
{
    printf("Numbers Exactly Divisible by 5 and 8 are %d\n", i);
}
}
return 0;
}