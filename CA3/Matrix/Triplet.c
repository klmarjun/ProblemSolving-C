#include<stdio.h>
int find3numbers (int A[], int arr_size,int sum)
{
  int i, j, k ;
  for (i = 0; i < arr_size - 2; i++)
    {
      for (j = i + 1; j < arr_size - 1; j++)
	{
	  for (k = j + 1; k < arr_size; k++)
	    if (A[i] + A[j] + A[k] == sum)
	  {
	    printf ("Triplet found\n");
	    printf ("%d%d%d", A[i], A[j], A[k]);
	  }
	}
    }
}

int main ()
{
  int A[] = { 7, 8, 9, 5, 4, 6, 0 };
  int arr_size = sizeof(A)/sizeof(A[0]);
  int sum = 17;
find3numbers (A, arr_size, sum);
    return 0;
}
