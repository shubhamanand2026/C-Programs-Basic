#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ptr[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Enter a element %d: ", i + 1);
        scanf("%d", &ptr[i]);
        printf("The value of the elements is: %d\n", ptr[i]);
    }
    return 0;
}