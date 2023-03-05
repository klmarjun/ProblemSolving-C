#include <stdio.h>
void main()
{
    int a[10000],i,n,key;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key : ");
    scanf("%d", &key);    
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            printf("element found in the array at position %d\n ",i+1); 
            break;                    
        }   
    
    } 
   
}