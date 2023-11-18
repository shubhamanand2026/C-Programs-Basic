#include <stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The Nth term of fibonacci series is %d", fibo(n));
    return 0;
}
int fibo(int n)
{
    int num;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        num = fibo(n - 1) + fibo(n - 2);
        return num;
    }
}
