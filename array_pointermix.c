#include <stdio.h>
int main()
{
    int marks[5];
    int *ptr;
    ptr = &marks[0]; // we can also write it as ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = &marks[0];
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is: %d\n", i + 1, *ptr);
        ptr++;
    }
    return 0;
}