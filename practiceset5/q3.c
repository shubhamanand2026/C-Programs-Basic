#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the value of mass in kilogram\n");
    scanf("%f",&m);
    printf("Force exerted by mass %f is: %.2f",m,force(m));
    return 0;
}
float force(float mass)
{
    float f=mass*9.8;
    return f;
}