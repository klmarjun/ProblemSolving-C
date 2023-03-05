#include <stdio.h>
int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("You entered %d.\n", number);
    }

    else
    {
        printf("Sorry, Invalid Input ");
    }

    return 0;
}