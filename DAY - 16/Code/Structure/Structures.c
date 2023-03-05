#include<stdio.h>
#include<stdlib.h>
struct basic_details
{
    char name[50];
    int age;
};
void main()
{
    struct basic_details b = {"Mike",25};
    printf("Name : %s\n",b.name);
    printf("Age : %d",b.age);
}

/*#include<conio.h>
#include<stdio.h>
struct person
{
  char name[20];
  int age;
}p;
void main()
{
 struct person p = {"John",45};
 //printf("Enter the value for name:");
 //scanf("%s",p.name);
 //printf("Enter the value for age:");
 //scanf("%d",&p.age);
 printf("\nThe name of the person is %s",p.name);
 printf("\nThe age of the person is %d",p.age);
}*/