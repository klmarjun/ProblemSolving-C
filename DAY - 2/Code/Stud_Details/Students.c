#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float engmarks;
    float mathmarks;
    float scimarks;
    float tamilmarks;
    float socialmarks;
    float totalmarks;
    float Average;
    char studGrade;
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

    printf("Enter Social marks : ");
    scanf("%f",&s.socialmarks);

   printf("Enter Tamil marks : ");
    scanf("%f",&s.tamilmarks);


    printf("Enter Math marks : ");
    scanf("%f",&s.mathmarks);

    printf("Enter Science marks : ");
    scanf("%f",&s.scimarks);

    printf("Enter Grade: ");
    scanf("%c",&s.studGrade);
   
   s.totalmarks = (s.scimarks+s.engmarks+s.mathmarks+s.tamilmarks+s.socialmarks);
    
    s.Average = (s.scimarks+s.engmarks+s.mathmarks)/3;

    

    printf("\nDisplaying Information\n");
    
 printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.engmarks);
    printf("Marks: %.2f\n",s.mathmarks);
    printf("Marks: %.2f\n",s.scimarks);
    printf("Marks: %.2f\n",s.tamilmarks);
    printf("Marks: %.2f\n")
    printf("Total Marks: %.2f\n",s.totalmarks);
    printf("Average Marks: %f", s.Average);
    printf("Grade: ",s.studGrade);
    return 0;
}