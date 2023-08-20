#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[] = "Hello012World";
    int i,vCount=0,cCount=0,digCount = 0;
    for(i=0;i<strlen(str);++i)
    {
        str[i] = tolower(str[i]);
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
            {
                vCount++;
            }
        else if(str[i]>='a'&&str[i]<='z')
            {
                cCount++;
            }
        else if (str[i]>='0'&&str[i]<='9')
            {
                digCount++;    
            }
    }
    printf("Vowel Count : %d",vCount);
    printf("Consonant Count : %d",cCount);
    printf("Digit Count : %d",digCount);
    return 0;
}