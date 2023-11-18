#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Shubham.txt", "r");
    if (ptr == NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        int birthday;
        fscanf(ptr, "%d", &birthday);
        printf("Shubham Anand Birthday is on: %d\n", birthday);
    }
    fclose(ptr);
    return 0;
}