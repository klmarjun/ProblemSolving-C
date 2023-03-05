#include <stdio.h>
int main() {
    int n[5], i, sum = 0,lim;
    printf("Enter Limit: ");
    scanf("%d",&lim);
    

    for (i = 1; i <= lim; ++i) {
        printf("Enter a positive integer: ");
        scanf("%d", &n[i]);
        sum += n[i];
       
    }
   

    printf("Sum = %d", sum);
    return 0;
}
