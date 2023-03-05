#include <stdio.h>
int main() 
{
  int i, Num;
  int temp1 = 0;
  int temp2 = 1;
  int nxtnum = temp1 + temp2;
  printf("Enter the number of terms: ");
  scanf("%d", &Num);
  printf("Fibonacci Series:\n %d\n %d\n ", temp1, temp2);
  for (i = 3; i <= Num; ++i) {
    printf("%d\n ", nxtnum);
    temp1 = temp2;
    temp2 = nxtnum;
    nxtnum = temp1 + temp2;
  }
  return 0;
}