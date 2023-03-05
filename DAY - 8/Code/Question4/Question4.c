/*Write a program that determines a student‟s grade. It reads three tests scores (between 0 to 100) 
and calls a function that calculate and returns a student‟s grade based on the following rules:
a)If the average score is 90% or more, the grade is A.
b)If the average scores are 70% or more and less than 90%, it checks the third score. If the third 
score is more than 90%, the grade is A; otherwise, the grade is B.
c)If the average score is 50% or more and less than 70%, it checks the average of the second and
third scores. If the average of two is greater than 70%, the grade is C; otherwise, it is D.
d)If the average score is less than 50%, then the grade F.*/

#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    int res;
    float engmarks;
    float mathmarks;
    float scimarks;
    float totalmarks;
    float Average;
    char studGrade[10];
};
int main()
{
    struct student s;
    
 printf("Enter The Information of Students :\n\n");
    
 printf("Enter Name : ");
    scanf("%s",s.name);
    
 printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    
    printf("Enter English marks : ");
    scanf("%f",&s.engmarks);

    printf("Enter Math marks : ");
    scanf("%f",&s.mathmarks);
 
    printf("Enter Science marks : ");
    scanf("%f",&s.scimarks);
    s.totalmarks = (s.scimarks+s.engmarks+s.mathmarks);
    s.Average = (s.scimarks+s.engmarks+s.mathmarks)/3;
    s.res = (s.scimarks+s.mathmarks)/2;
   
    printf("\nDisplaying Information\n");
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.engmarks);
    printf("Marks: %.2f\n",s.mathmarks);
    printf("Marks: %.2f\n",s.scimarks);
    printf("Total Marks: %.2f\n",s.totalmarks);
    printf("Average Marks: %f\n", s.Average);
    if (s.Average >= 90)
    {
        printf("You have secured A grade");
    }
    else if (s.Average>=70 && s.Average<90)
    {
        if(s.scimarks>90)
        {
            printf("You have secured A grade");
        }
        else
        {
            printf("You have secured B grade");
        }

    }
    else if(s.Average>=50 && s.Average<70)
    {
        if (s.res>70)
        {
            printf("You have secured C grade");
        }
        else 
        {
            printf("You have secured D grade");
        }
    }
    else if (s.Average<50 && s.Average >= 0)

    {
        printf("You have secured F grade");
    }
    else
    {
        printf("Sorry Invalid input");
    }
   
    return 0;
}