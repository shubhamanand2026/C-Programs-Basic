#include <stdio.h>
int main()
{
    int arr[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the value of array(%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("The value of array(%d,%d) is: %d\n", i + 1, j + 1,arr[i][j]);
        }
    }
    return 0;
}