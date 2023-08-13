#include <stdio.h>
int main()
{
char character;
printf("Enter Anything: ");
scanf("%c", &character);
    if((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        printf("'%c' is Alphabet.", character);
    }
    else if(character >= '0' && character <= '9')
    {
        printf("'%c' is Digit.", character);
    }
    else 
    {
        printf("'%c' is Special Character.", character);
    }

    return 0;
}