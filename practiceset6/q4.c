#include <stdio.h>
int sum(int *a, int *b);
int avg(int *a, int *b);
int main()
{
    int a = 4, b = 6;
    int p, q;
    p = sum(&a, &b);
    printf("The sum of a and b is: %d\n", p);
    q=avg(&a, &b);
    printf("The average of a and b is: %d\n", q);
    return 0;
}
int sum(int *a, int *b)
{
    int s = *a + *b;
    return s;
}
int avg(int *a, int *b)
{
    int av = (*a + *b) / 2;
    return av;
}