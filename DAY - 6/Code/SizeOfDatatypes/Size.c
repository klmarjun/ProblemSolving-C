#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    long double longdoubleType;
    char charType;
    printf("Size of int: %d bytes\n", sizeof(intType));
    printf("Size of float: %d bytes\n", sizeof(floatType));
    printf("Size of double: %d bytes\n", sizeof(doubleType));
    printf("size of long double= %d bytes\n", sizeof(long double));
    printf("Size of char: %d byte\n", sizeof(charType));
    
    return 0;
}