#include <stdio.h>
void adress(int *a);
int main()
{
    int i;
    printf("Enter value of i\n");
    scanf("%d",&i);
    printf("The address of i before passing is: %u\n",&i);
    adress(&i);
    return 0;
}
void adress(int *a)
{
    printf("The address of passed variable is: %u",a);
}