 #include <stdio.h>
struct company{
    char name[30];
    char adress[100];
    int noOfEmployees;
    long long phoneNo;
};
 
int main()
{
    struct company c;
    printf("\nEnter details :\n");
    printf("Enter Name of the Company:");          
    gets(c.name);
    printf("Enter adress :");            
    scanf("%s",&c.adress);
    printf("Enter the no of employees working in that company:");        
    scanf("%d",&c.noOfEmployees);
    printf("Phone Number:");        
    scanf("%lld",&c.phoneNo);

    printf("\nEntered detail is:\n");
    printf("Company Name: %s\n",c.name);
    printf("Company Adress: %s\n",c.adress);
    printf("Number of Employees working: %d\n",c.noOfEmployees);
    printf("Phone number: %lld\n",c.phoneNo);
    return 0;
}