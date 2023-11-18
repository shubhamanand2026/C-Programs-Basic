#include <stdio.h>
void display(int r, int c)
{
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the value of array(%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("The value of array(%d,%d) is: %d\n", i + 1, j + 1, arr[i][j]);
        }
    }
}
int main()
{
    int a, b;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);
    display(a, b);
    return 0;
}