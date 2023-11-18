#include <stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("The Sum of the first %d natural number is: %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    int s;
    if(n==1)
    {
        return 1;
    }
    else
    {
        s=n+sum(n-1);
        return s;
    }
}