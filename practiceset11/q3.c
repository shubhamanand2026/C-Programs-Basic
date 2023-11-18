#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)calloc(6 , sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter a element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        printf("The value of the elements %d is: %d\n",i+1, ptr[i]);
    }
    return 0;
}