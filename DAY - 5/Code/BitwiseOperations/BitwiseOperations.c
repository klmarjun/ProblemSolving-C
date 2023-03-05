#include <stdio.h>  
int main()  
{  
int a,b;  // variable declarations 
printf("Enter two numbers:");
scanf("%d\n%d",&a,&b); 
printf("The output of the Bitwise OR operator a|b is %d\n",a|b);  
printf("The output of the Bitwise XOR operator a^b is %d\n",a^b);  
printf("The output of the Bitwise And operator a&b is %d\n",a&b); 
printf("The output of the Bitwise Complement operator ~a is %d\n",~a);  
printf("The right shift operation by 23>>3 is %d\n",a>>3);
printf("The left shift operation by 23<<3 is %d\n",a<<3);
return 0;  
}  