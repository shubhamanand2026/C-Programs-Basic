#include <stdio.h>
void arrayreverse(int n)
{
    int array[n];
    int arraycopy[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &array[i]);
        arraycopy[i] = array[i];
    }

    int t = 0;
    for (int j = 0; j < n; j++)
    {
        if (n % 2 == 0 && j < n / 2)
        {
            t = array[j];
            array[j] = array[n - (j + 1)];
            array[n - (j + 1)] = t;
            printf("The element %d is now: %d\n", j + 1, array[j]);
        }
        else if(n % 2 != 0 && j < (n + 1) / 2)
        {
            t = array[j];
            array[j] = array[n - (j + 1)];
            array[n - (j + 1)] = t;
            printf("The element %d is now: %d\n", j + 1, array[j]);
        }
    }
    int m = 0;
    for (int j = 0; j < n; j++)
    {
        if (n % 2 == 0 && j >= n / 2)
        {
            m = arraycopy[j];
            arraycopy[j] = arraycopy[n - (j + 1)];
            array[n - (j + 1)] = m;
            printf("The element %d is now: %d\n", j + 1, arraycopy[j]);
        }
        else if(n % 2 != 0 && j >= (n + 1) / 2)
        {
            m = arraycopy[j];
            arraycopy[j] = arraycopy[n - (j + 1)];
            arraycopy[n - (j + 1)] = m;
            printf("The element %d is now: %d\n", j + 1, arraycopy[j]);
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    arrayreverse(n);
    return 0;
}