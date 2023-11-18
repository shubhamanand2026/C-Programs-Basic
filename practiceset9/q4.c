#include <stdio.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1 = {3, 4};
    struct vector *ptr;
    ptr = &v1;
    printf("The horizontal part of vector is: %d\n", ptr->x);
    printf("The vertical part of vector is: %d\n", ptr->y);
    return 0;
}