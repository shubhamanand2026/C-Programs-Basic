#include <stdio.h>
int main()
{
    float r,h,area;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("Area of the circle is: %.2f\n",area);
    printf("Enter the height\n");
    scanf("%f",&h);
    printf("Volume of the cylinder is: %.2f",area*h);
    return 0;
}