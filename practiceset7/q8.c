#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter n1 n2 n2: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int array[3][10];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                array[i][j] = n1 * (j + 1);
            }
            else if (i == 1)
            {
                array[i][j] = n2 * (j + 1);
            }
            else if (i == 2)
            {
                array[i][j] = n3 * (j + 1);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0)
            {
                printf("%d * %d = %d\n", n1, j + 1, array[i][j]);
            }
            else if (i == 1)
            {
                printf("%d * %d = %d\n", n2, j + 1, array[i][j]);
            }
            else if (i == 2)
            {
                printf("%d * %d = %d\n", n3, j + 1, array[i][j]);
            }
        }
    }
    return 0;
}