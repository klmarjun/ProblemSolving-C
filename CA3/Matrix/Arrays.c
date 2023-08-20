#include<stdio.h>
int main()
{
    int mat1[100][100],mat2[100][100],resmat[100][100];
    int i,j,k,n;
    printf("Enter the no. of rows: ");
    scanf("%d",&k);
    printf("Enter the no. of columns: ");
    scanf("%d",&n);
    for (i=0;i<k;i++)
    {
        for (j=0;j<k;j++)
        {
            printf("Enter the element of mat1[%d][%d] : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for (i=0;i<k;i++)
    {
        for (j=0;j<k;j++)
        {
            printf("Enter the element of mat2[%d][%d] : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("Resultant matrix: \n");
    for (i=0;i<k;i++)
    {
        for (j=0;j<k;j++)
        {
            resmat[i][j] = mat1[i][j]+mat2[i][j];
            printf("%d\t",resmat[i][j]);
        }
        printf("\n");
    }
    return 0;
    
    
}