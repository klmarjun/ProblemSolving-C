#include <stdio.h>
int main()
{
    int num1, num2, endline;
    int  n=0;
    
    printf ("enter number of lines:");
    scanf("%d",&endline);
    
    for (num1=1;num1<=endline;num1++)
{ 
    for(num2=endline;num2>=num1;num2++)
    {
        printf("*");
        num1++;
        break;
        
    }
    printf("\n");
  }
}