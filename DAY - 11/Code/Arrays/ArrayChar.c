#include<stdio.h>
int main()
{
char word[5]= {'h','e','l','l','o'};
int i;
for(i=0;i<5;i++)
{
    printf("The word[%d] is %c\n",i+1,word[i]);
}
    return 0;
}