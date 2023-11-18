#include <stdio.h>
int main()
{
    int array[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                array[i][j] = 2 * (j + 1);
            }
            else if (i == 1)
            {
                array[i][j] = 7 * (j + 1);
            }
            else if (i == 2)
            {
                array[i][j] = 9 * (j + 1);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                printf("%d * %d = %d\n", 2, j + 1, array[i][j]);
            }
            else if (i == 1)
            {
                printf("%d * %d = %d\n", 7, j + 1, array[i][j]);
            }
            else if (i == 2)
            {
                printf("%d * %d = %d\n", 9, j + 1, array[i][j]);
            }
        }
    }
    return 0;
}