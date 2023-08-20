#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int *ptr;
    printf("Enter the size of array:");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    if (ptr == NULL)
    {
        printf("memory not allocated");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated");
        for(i=0;i<n;i++)
        {
            ptr[i] = i+1;
        }
        for (i=0;i<n;i++)
        {
            printf("%d",ptr[i]);
        }
    }
    return 0;
}