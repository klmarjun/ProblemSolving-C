/*write a functions for displaying your personal information and as well as average of marks  with marks in individual subjects*/
#include<stdio.h>
#include<stdlib.h>
void pers_info();
void marks();
void main()
{
   pers_info();
   marks();
    
}
void pers_info()
{
    char name[50];
    int id;
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter your ID:");
    scanf("%d",&id);
   
}
void marks()
{
    int math_mark,sci_mark,eng_mark;
    float average;
    printf("Enter Math mark:");
    scanf("%d",&math_mark);
    printf("Enter Science mark:");
    scanf("%d",&sci_mark);
    printf("Enter English mark:");
    scanf("%d",&eng_mark);
    average = (math_mark+sci_mark+eng_mark)/3;
    printf("Average: %0.2f",average);
   

}