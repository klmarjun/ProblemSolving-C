/* Game time
Guess the correct num and alphabet */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    char character;
    printf("Guess the correct charcter : ");
    scanf("%c",&character);
    if (character == "a")
        { 
            printf("The Character you entered is correct\n");
        
       
            printf("Enter the correct number to win the game : ");
            scanf("%d",&num);
   
            if (num %7 == 0 )
        {
                printf("The number %d is a correct guess\n",num);
                printf("congratulations You have won this game..\nMoney Credited to Your account");
        }
             else
        {
                printf("You Lose the game");
        }
    }
    
    else
    {
        printf("Sorry.\nThe number %d is a Wrong guess",num);
    }
    return 0;
}