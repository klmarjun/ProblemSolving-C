#include <stdio.h>
int main()

{
    int opt;
    printf("Enter\n 1.Arithmentic\n2. to increment/decrement\n3.Assignment Operators\n4.Logical Operators\n5.Relational operators\n6.Post Decrement\n7.Post Increment\n8.Pre Decrement\n9.Pre Increment\n10.Size of DataTypes\n");
    scanf("%d",&opt);
    if (opt == 1){
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
 
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("PRODUCT = %d\n", mult);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", mod);
 
    }
    else if(opt == 2){
    int a = 5, b = 10;
    float c = 10.2, d = 12.3;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    
    }
    else if(opt == 3){
    int a = 5, b;

    b = a;      
    printf("c = %d\n", b);
    b += a;     
    printf("c = %d\n", b);
    b -= a;    
    printf("c = %d\n", b);
    b *= a;     
    printf("c = %d\n", b);
    b /= a;     
    printf("c = %d\n", b);
    b %= a;     
    printf("c = %d\n", b);

   
    }
    else if(opt == 4){
int n;
printf("Enter a digit between -100 to 100: ");
scanf("%d",&n);
if((n>0) && (n<=100))
{
printf(" Given number is in between 0 and 100");
}
else if((n>-100) && (n<0))
{
printf("Given number is in between -100 and 0");
}
else
{
printf("Please enter a number in the given range");
}

    }
    else if(opt == 5){
    int a,b ;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
   
    printf("%d <= %d is %d \n", a, b, a <= b);  
    printf("%d >= %d is %d \n", a, b, a >= b); 
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d > %d is %d \n", a, b, a > b);   
    printf("%d == %d is %d \n", a, b, a == b);
    
    }
    else if(opt == 6){
   int a= 10, z;
   z= a--;
   printf ("Z= %d\n", z);
   printf ("A=%d", a);
   
    }
    else if(opt == 7){
   int a= 10, z;
   z= a++;
   printf ("Z= %d\n", z);
   printf ("A=%d", a);
   
    }
    else if(opt == 8){
   int A= 10, Z;
   Z= --A;
   printf ("Z= %d", Z);
   printf (" A=%d", A);
   
    }
    else if(opt == 9){
   int A= 10, Z;
   Z= ++A;
   printf ("Z= %d", Z);
   printf (" A=%d", A);
   }
   else if(opt == 10){
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
    }
    else{
        printf("Invalid Input.");
        return 0;
    }
   

}