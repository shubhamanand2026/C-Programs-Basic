#include <stdio.h>
int area(int a);
int main()
{
    int s;
    printf("Enter the side of the square\n");
    scanf("%d",&s);
    area(s);
    return 0;
}
int area(int a)
{
    int area=a*a;
    printf("Area of the Square is: %d",area);
    return 0;
}