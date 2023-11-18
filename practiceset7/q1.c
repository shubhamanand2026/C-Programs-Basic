#include <stdio.h>
int main()
{
    int array[10];
    int *ptr = array; // or &array[0];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    ptr=ptr+2;
    printf("Third value is: %d\n",array[2]);
    printf("Third value is: %d",*ptr);
    return 0;
}