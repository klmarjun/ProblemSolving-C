#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1,*fp2;
    int character;
    fp1 = fopen("Test.txt","r");
    fp2 = fopen("NewFile.txt","w");
    fscanf(fp1,"%d",&character);
    fprintf(fp2,"x = %d",character);
    return 0;

}