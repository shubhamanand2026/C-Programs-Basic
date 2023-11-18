#include <stdio.h>
#include <string.h>
#include <math.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    int net_x,net_y,net;
    float result;
    struct vector v[2];
    printf("Enter the horizontal part of 1st vector: ");
    scanf("%d",&v[0].x);
    printf("Enter the vertical part of 1st vector: ");
    scanf("%d",&v[0].y);
    printf("Enter the horizontal part of 2nd vector: ");
    scanf("%d",&v[1].x);
    printf("Enter the vertical part of 2nd vector: ");
    scanf("%d",&v[1].y);

    net_x=(v[0].x)+(v[1].x);
    net_y=(v[0].y)+(v[1].y);
    net=(net_x*net_x)+(net_y*net_y);
    result=pow(net,0.5);
    printf("Magnitude of the sum of two vectors is: %.2f",result);
    return 0;
}