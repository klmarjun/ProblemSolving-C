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
    int i;
   
    struct student s;
    for (i=0 ;i<5;i++)
    {
    printf("Enter The Information of Students :\n\n");
    
    printf("Enter Name : ");
    scanf("%s",&s.name);
    
    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);
    
    printf("Enter English marks : ");
    scanf("%f",&s.engmarks);

    printf("Enter Math marks : ");
    scanf("%f",&s.mathmarks);
 
    printf("Enter Science marks : ");
    scanf("%f",&s.scimarks);
    printf("\n");
   
   s.totalmarks = (s.scimarks+s.engmarks+s.mathmarks);
    
    s.Average = (s.scimarks+s.engmarks+s.mathmarks)/3;
    
    printf("____________________________________\nDisplaying Information For Student %d\n____________________________________\n",i+1);  
    printf("Name: %s\n",s.name);
    printf("Roll no: %d\n",s.roll);
    printf(" Eng Marks: %.02f\n",s.engmarks);
    printf(" Math Marks: %0.2f\n",s.mathmarks);
    printf(" Sci Marks: %0.2f\n",s.scimarks);
    printf("Total Marks: %0.2f\n",s.totalmarks);
    printf("Average Marks: %0.2f\n", s.Average);
    }
    
    return 0;
}