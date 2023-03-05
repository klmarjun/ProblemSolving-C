#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float engmarks;
    float mathmarks;
    float scimarks;
    float totalmarks;
    float Average;
}s;
int main()
{
    int i = 0;
    struct student s;
while (i<5)
 {   
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
 
    printf("\nDisplaying Information for student %d\n",i+1);
    
    printf("Name: %s\n",s.name);
    printf("Roll: %d\n",s.roll);
    printf("Marks: %.2f\n",s.engmarks);
    printf("Marks: %.2f\n",s.mathmarks);
    printf("Marks: %.2f\n",s.scimarks);
    printf("Total Marks: %.2f\n",s.totalmarks);
    printf("Average Marks: %f\n", s.Average);
    i++;
 }
    return 0;
 
}
