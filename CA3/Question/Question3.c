#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,*ptr1,*ptr2;
	printf("enter the value :");
	scanf("%d",&n);
	ptr1=(int*)malloc(n*sizeof(int));
	ptr2=(int*)calloc(n*sizeof(int));
	if(ptr1== NULL)
	{
		printf("memory overflow");
	}
	else
	{
		printf("malloc:");
		for(i=0;i<n;i++)
		{
			printf("the momery space for%d id %u",*(ptr1+1),(ptr1+i));
		}
	}
	if(ptr2==NULL)
	{
		printf("memory overflow");
    }
	else
	{
		printf("calloc:");
		for(i=0;i<n;i++)
		{
			printf("the momery space for%d id %u",*(ptr2+1),(ptr2+i));
		}
	}
	}
