#include<stdio.h>
int main()
{
    int m1[2][2],m2[2][2],m3[2][2],i,j,k,n;
    printf("Enter the elements of Matrix 1: \n");
    scanf("%d",&n);

    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++)
		{
            scanf("%d", & m1[i][j]);
        }
    }
     printf("Enter the elements of Matrix 2: \n");

    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < n; j++) 
	   
       {
		scanf("%d", & m2[i][j]);
       }  
    }    
       
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            m3[i][j] = 0;
            for (k = 0; k < n; k++) 
			{
                m3[i][j] = m1[i][j] * m2[i][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < n; i++) 
	{
        for (j = 0; j < n; j++) 
		{
            printf("%d\t", m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}