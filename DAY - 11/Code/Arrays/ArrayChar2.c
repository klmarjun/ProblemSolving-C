#include<stdio.h>
#include<conio.h>
void main()
{
 char word[6]="hello\0";
 char word1[5]={'h','e','l','l','o'};
 int i;
 printf("\n The printing the string no need of loop:");
 printf("\n the word is %s",word);
 printf("\n printing the character:");
 for(i=0;i<5;i++)
 {
 printf("\n address %p and the word[%d] is %c",&word[i],i+1,word[i]);
 }
getch();
}