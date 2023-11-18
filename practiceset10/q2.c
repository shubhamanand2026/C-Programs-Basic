#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    FILE *ptr;
    ptr = fopen("Multiplication_table.txt", "w");
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d * %d = %d\n",n,i,n*i);
    }
    fclose(ptr);
    return 0;
}