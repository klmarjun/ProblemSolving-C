#include <stdio.h>
int main()
{
     int pn,us,pp;
     printf("Enter Product no.: ");
     scanf("%d",&pn);
     printf("Enter Unit Sold: ");
     scanf("%d",&us);
     printf("Enter Product Price: ");
     scanf("%d",&pp);
     switch(pn)
     {
         case 1:
            printf("The sum of Amount paid %d",(us*pp));
            break;
         case 2:
            printf("The sum of Amount paid %d",(us*pp));
            break;
         case 3:
            printf("The sum of Amount paid %d",(us*pp));
            break;
         case 4:
            printf("The sum of Amount paid %d",(us*pp));
            break;
         case 5:
            printf("The sum of Amount paid %d",(us*pp));
            break;     
         default:
            printf("try with some other value");
     }
    return 0;
}