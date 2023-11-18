#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter a element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        printf("The value of the elements is: %d\n", ptr[i]);

        // We can also do it like this.
        /*scanf("%d", ptr);
          printf("The value of the elements is: %d\n", *ptr);
          ptr++; */
    }
    return 0;
}