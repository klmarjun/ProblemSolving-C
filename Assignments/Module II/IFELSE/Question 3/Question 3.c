#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int rollnum,phy,che,compappl,total;
    float percent;
    char name[20],div[10];
    printf("Input the Roll Number of the student :");
    scanf("%d",&rollnum);
    printf("Input the Name of the Student :");
    scanf("%s",name);
    printf("Input  the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&phy,&che,&compappl);
    total = phy+che+compappl;
    percent = total/3.0;
    if (percent>=60)
	 strcpy(div,"First");
    else
	if (percent<60&&percent>=48)
	    strcpy(div,"Second");
	else
	    if (percent<48&&percent>=36)
		strcpy(div,"Pass");
	     else
		strcpy(div,"Fail");

       printf("\nRoll No : %d",rollnum);
       printf("\nName of Student : %s",name);
       printf("\nMarks in Physics : %d",phy);
       printf("\nMarks in Chemistry : %d",che);
       printf("\nMarks in Computer Application : %d",compappl);
       printf("Total Marks = %d",total);
       printf("\nPercentage = %.2f",percent);
       printf("\nDivision = %s\n",div);
}