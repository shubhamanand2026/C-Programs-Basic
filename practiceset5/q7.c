#include <stdio.h>
void pattern(int n);
int main()
{
    int n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=(2*i)+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}