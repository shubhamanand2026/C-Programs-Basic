#include <stdio.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v[2];
    printf("Enter the horizontal part of 1st vector: ");
    scanf("%d",&v[0].x);
    printf("Enter the vertical part of 1st vector: ");
    scanf("%d",&v[0].y);
    printf("Enter the horizontal part of 2nd vector: ");
    scanf("%d",&v[1].x);
    printf("Enter the vertical part of 2nd vector: ");
    scanf("%d",&v[1].y);
    return 0;
}