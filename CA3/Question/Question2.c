#include<stdio.h>
struct company
    {
        int EmpID;
        char EmpName[20];
        int Designation;
        int BasicPay;
        int HouseRentAllowance;
        int ProvidentFund;
        int NetSalary;
        int GrossSalary;
    };
int main()
{
    int netsal;
    struct company c;
    printf("Enter Emp ID:");
    scanf("%d",&c.EmpID);
    printf("Employee name:");
    scanf("%s",&c.EmpName);
    printf("NetSalary:");
    scanf("%d",&c.NetSalary);
    printf("Gross Salary");
    scanf("%d",&c.GrossSalary);
    netsal = c.GrossSalary-c.NetSalary;
    printf("Name of the employee is: %s",c.EmpName);
    printf("Netsalary = %d",netsal);
    printf("End");
    return 0;
}