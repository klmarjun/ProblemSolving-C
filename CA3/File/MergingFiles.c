#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1 = fopen("First.txt","r");
    FILE *fp2 = fopen("Second.txt","r");
    FILE *fp3 = fopen("Third.txt","w");
    char x;
    if(fp1==NULL||fp2==NULL||fp3==NULL)
    {
        printf("File cannot be opened");
    }
    while((x=fgetc(fp1))!=EOF)
    fputc(x,fp3);
    while((x=fgetc(fp2))!=EOF)
    fputc(x,fp3);
    printf("Done");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}