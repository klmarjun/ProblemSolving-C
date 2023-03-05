#include<stdio.h>  
int main() 
{ 
	int num;
	while(num<=100) {
	    for(int i = 10; i <= 100; i++)
            {
                if(i % 5 == 0 && i % 8 == 0)
                {
                    printf("Numbers Exactly Divisible by 5 and 8 are %d\n", i);
                  
                }
                
            }
    break;
    }
       
	return 0;; 
} 