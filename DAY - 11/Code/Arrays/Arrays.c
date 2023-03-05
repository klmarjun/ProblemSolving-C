/*
Syntax
type 1 - Datatype varname[IndexValue]
type 2 - Datatype varname[IndexValue]={value,value} */
#include<stdio.h>
int main()
{
int person[4] = {4,5,6,7},i;
for(i=0;i<4;i++)
printf("Favourite number of is %d\n",person[i]);
return 0;
}