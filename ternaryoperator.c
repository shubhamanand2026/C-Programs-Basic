#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    a<b?printf("a is less than b"):printf("b is less than a");
    return 0;
}