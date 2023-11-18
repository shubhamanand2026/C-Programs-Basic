#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Enter a divisor: ");
    scanf("%d", &n1);
    printf("Enter a dividend: ");
    scanf("%d", &n2);
    printf("Remainder is %d\n", n2 % n1);
    printf("Quotient is %d\n", n2 / n1);
    return 0;
}