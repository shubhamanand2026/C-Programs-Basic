#include <stdio.h>
float conversion(float cel);
int main()
{
    float c;
    printf("Enter the Temperature in celcius\n");
    scanf("%f",&c);
    printf("Temperature in Fahrenheit is: %.2f",conversion(c));
    return 0;
}
float conversion(float cel)
{
    float fah;
    fah=(9*cel/5)+32;
    return fah;
}