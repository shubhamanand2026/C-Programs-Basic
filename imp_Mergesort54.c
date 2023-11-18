#include <stdio.h>

void merge(int array[], int left, int mid, int right)
{
    int left_array[mid + 1 - left];
    int right_array[right - mid];

    for (int i = 0; i < mid + 1 - left; i++)
    {
        left_array[i] = array[left + i];
    }
    for (int i = 0; i < right - mid; i++)
    {
        right_array[i] = array[mid + 1 + i];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < mid + 1 - left && j < right - mid)
    {
        if (left_array[i] <= right_array[j])
        {
            array[k] = left_array[i];
            i++;
        }
        else
        {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    while (i < mid + 1 - left)
    {
        array[k] = left_array[i];
        i++;
        k++;
    }

    while (j < right - mid)
    {
        array[k] = right_array[j];
        j++;
        k++;
    }
}

void merge_sort(int array[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        printf("Currently partitions %d to %d and %d to %d\n", left, mid, mid + 1, right);

        merge_sort(array, left, mid);
        merge_sort(array, mid + 1, right);

        merge(array, left, mid, right);

        printf("Currently Merging %d to %d and %d to %d giving output\n", left, mid, mid + 1, right);
        for (int i = left; i < right + 1; i++)
        {
            printf("%d ", array[i]);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    merge_sort(array, 0, n - 1);
    return 0;
}
