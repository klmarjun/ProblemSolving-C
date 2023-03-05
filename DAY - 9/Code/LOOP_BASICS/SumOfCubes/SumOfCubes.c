void main() 
{ 
int rem,sum;  
long int n,temp; 
printf ("Enter an integer"); 
scanf ("%ld",&n); 
temp=n; 
sum=0; 
while (n>0) 
{ 
rem =n%10; 
sum+=rem; 
n/=10; 
} 
printf ("sum of the digits of ld=%d\n",temp,sum);
return 0; 
} 
