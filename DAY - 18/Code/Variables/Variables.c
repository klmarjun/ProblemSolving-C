#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
}
/*#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
}
#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[100];  
void main ()  
{  
printf("%d %d %f %s",c,i,f); // the initial default value of c, i, and f will be printed.   
}
#include <stdio.h>  
int main()  
{  
int a; //auto  
char b;  
float c;   
printf("%d %c %f",a,b,c); // printing initial default value of automatic variables a, b, and c.   
return 0;  
}
BALAJI PRASATH M1:44 PM
Example 2
#include <stdio.h>  
int main()  
{  
int a = 10,i;   
printf("%d ",++a);  
{  
int a = 20;   
for (i=0;i<3;i++)  
{  
printf("%d ",a); // 20 will be printed 3 times since it is the local value of a  
}  
}  
printf("%d ",a); // 11 will be printed since the scope of a = 20 is ended.   
}  
Output:
	11 20 20 20 11
BALAJI PRASATH M1:57 PM
Example 1
#include <stdio.h>  
int main()  
{  
register int a; 
printf("%d",a);  
}  
Output:
Garbage…
BALAJI PRASATH M2:04 PM
#include<stdio.h>
#include<conio.h>
int a;
void main()
{
 clrscr();
 printf("%d",a);
 getch();

 }
#include<stdio.h>
#include<conio.h>
int a;
void sum();
void main()
{
 clrscr();
 printf("%d",a);    // a=0
 sum();
 getch();
 }
void sum()
{
 a=a+2;
 printf("\n%d",a);   //a=2
}*/