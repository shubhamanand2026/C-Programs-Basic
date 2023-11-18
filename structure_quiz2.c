#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[25];
};

void show(struct employee *e);
int main()
{
    struct employee worker;
    show(&worker);
    printf("code of employee is: %d\n", worker.code);
    printf("Name of employee is: %s\n", worker.name);
    printf("Salary of employee is: %.2f\n", worker.salary);
    return 0;
}
void show(struct employee *e)
{
    printf("Enter code: ");
    scanf("%d", &(*e).code);

    printf("Enter Salary: ");
    scanf("%f", &(*e).salary);

    printf("Enter name: ");
    scanf("%s", (*e).name);
}