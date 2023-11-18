#include <stdio.h>
#include <string.h>
int main()
{
    struct employee
    {
        int roll_no;
        char name[20];
        float salary;
    };

    struct employee e1,e2,e3;
    printf("Enter the details of employee e1 \n");
    printf("Enter the roll number of employee e1: ");
    scanf("%d",&e1.roll_no);
    printf("Enter name of employee e1: ");
    scanf("%s",e1.name);
    printf("Enter the salary of employee e1: ");
    scanf("%f",&e1.salary);

    printf("\nEnter the details of employee e2 \n");
    printf("Enter the roll number of employee e2: ");
    scanf("%d",&e2.roll_no);
    printf("Enter name of employee e2: ");
    scanf("%s",e2.name);
    printf("Enter the salary of employee e2: ");
    scanf("%f",&e2.salary);

    printf("\nEnter the details of employee e3 \n");
    printf("Enter the roll number of employee e3: ");
    scanf("%d",&e3.roll_no);
    printf("Enter name of employee e3: ");
    scanf("%s",e3.name);
    printf("Enter the salary of employee e3: ");
    scanf("%f",&e3.salary);
    return 0;
}