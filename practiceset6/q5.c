#include <stdio.h>
int main()
{
    int i=2;
    int *j=&i;
    int **k=&j;
    printf("The value of i is: %d",**k);
    return 0;
}