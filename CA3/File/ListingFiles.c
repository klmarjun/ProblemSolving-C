#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
    FILE *fptr; 
    char ch; 
    int wrd=1,charctr=1;
    char fname[20];
	    
    FILE *fname = "Test.txt";

    fptr=fopen(fname,"r"); 
    if(fptr==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else 
        { 
          ch=fgetc(fptr); 
    
          while(ch!=EOF) 
            { 
                
                if(ch==' '||ch=='\n')
                    { 
                        wrd++; 
                    }
                    else
                    {
                        charctr++; 
                    }
                ch=fgetc(fptr); 
            }
        printf("\n The number of words in the  file %s are : %d\n",fname,wrd-2); 
        printf(" The number of characters in the  file %s are : %d\n\n",fname,charctr-1);         
        } 
    fclose(fptr); 
}