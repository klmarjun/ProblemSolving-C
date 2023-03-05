/*Given an integer between 0 and 6, write a program that prints the corresponding day of the week.
Assume that the first day of the week (O) is Sunday.*/
#include <stdio.h>
int main() {
    int d;
    printf("Enter day number (0-6): ");
    scanf("%d", &d);

switch(d)
{
case 0:
   printf("Sunday");
   break;
case 1:
   printf("Monday");
   break;
case 2:
   printf("Tuesday");
   break;
case 3:
   printf("Wednesday");
   break;
case 4:
   printf("Thursday");
   break;
case 5:
   printf("Friday");
   break;
case 6:
   printf("Saturday");
   break;

 default:
   printf(" Sorry, Enter an valid input");
    }
    return 0;
}
