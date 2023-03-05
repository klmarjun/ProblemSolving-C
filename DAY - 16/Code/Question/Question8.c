#include <stdio.h>
int main()
{
	int s=1, e=500, num, n, tar = 0, i, sum;
	for (i = s; i <= e; i++) 
    {
		num = i;
		sum = i;
		
		while (num != 0) 
        {
			n = num % 10;
			tar = tar + (n * n * n);
			num = num / 10;
		}
		
		if (sum == tar) {
			printf("%d\n", i);
		}
		tar = 0;
	}
	return 0;
}
