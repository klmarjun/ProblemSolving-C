#include<stdio.h>
int main ( )
{
   int a= 10, z;
   z= a++;
   printf ("Z= %d\n", z);
   printf ("A=%d", a);
   return 0;
}