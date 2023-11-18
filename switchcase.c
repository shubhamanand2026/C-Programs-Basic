#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter '1' for '+'\n");
    printf("Enter '2' for '-'\n");
    printf("Enter '3' for '*'\n");
    printf("Enter '4' for '/'\n");
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        printf("%.2f + %.2f is %.2f", a, b, a + b);
        break;
    }
    case 2:
    {
        printf("%.2f - %.2f is %.2f", a, b, a - b);
        break;
    }
    case 3:
    {
        printf("%.2f * %.2f is %.2f", a, b, a * b);
        break;
    }
    case 4:
    {
        printf("%.2f / %.2f is %.2f", a, b, a / b);
        break;
    }
    default:
    {
        printf("Value enter is invalid");
        break;
    }
    }
    return 0;
}