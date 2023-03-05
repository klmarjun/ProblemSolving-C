/* write a program that generates the second, third, and fourth powers of a list of 
whole numbers from 1 to n where n is input by the user.*/
#include<stdio.h>
#include<math.h>
int main()
{
double res,i;
int end;

printf("Enter end number: ");
scanf("%d",&end);
for(i = 1; i < end+1;i++)
{
res = pow(i,2);
printf("The Second power of %lf is %lf\n",i,res);
res = pow(i,3);
printf("The Third power of %lf is %lf\n",i,res);
res = pow(i,4);
printf("The Fourth power of %lf is %lf\n",i,res);

}
    

    return 0;
}