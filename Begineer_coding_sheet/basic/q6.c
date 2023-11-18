#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter 1st number 'a': ");
    scanf("%d",&a);
    printf("Enter 2nd number 'b': ");
    scanf("%d",&b);
    printf("Value of 'a' & 'b' befor swaping is %d and %d respectively\n",a,b);
     a=a+b;
     b=a-b;
     a=a-b;
    printf("Value of 'a' & 'b' after swaping is %d and %d respectively\n",a,b);
    return 0;
}