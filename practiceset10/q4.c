#include <stdio.h>
int main()
{
    char name1[50];
    char name2[50];
    int salary1;
    int salary2;
    printf("Enter name of employee 1: ");
    gets(name1);
    printf("Enter name of employee 2: ");
    gets(name2);
    printf("Enter the salary of employee 1: ");
    scanf("%d", &salary1);
    printf("Enter the salary of employee 2: ");
    scanf("%d", &salary2);
    FILE *ptr;
    ptr = fopen("fileq4.txt", "w");
    fprintf(ptr, "%s , %d\n", name1, salary1);
    fprintf(ptr, "%s , %d\n", name2, salary2);
    fclose(ptr);
    return 0;
}