//No return with argument function in c
#include<stdio.h>
 void add(float,float);
 void main()
 {
   add(12.25,24.397);
 }
 void add(float x,float y)
 {
    float res;
    res = x+y ;
    printf("Addition of %0.3f and %0.3f is %0.2f",x,y,res);
 }