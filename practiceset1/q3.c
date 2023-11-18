#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter Temperature in Celcius\n");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("Temperature in Fahrenheit is: %.2f",f);
    return 0;
}