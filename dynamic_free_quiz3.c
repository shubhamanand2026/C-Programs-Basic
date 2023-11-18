#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, *ptr2;
    ptr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        ptr2 = (int *)malloc(500 * 900000);
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of element %d is: %d", i + 1, ptr[i]);
    }
    return 0;
}