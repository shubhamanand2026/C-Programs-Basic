#include <stdio.h>
int main()
{
    int a=6;
    int *b=&a;
    printf("The adress of a is %u\n",b);
    printf("The adress of a is %d\n",*b);
    return 0;
}