#include <stdio.h>
int change(int *j);
int main()
{
    int i;
    printf("Enter value of i \n");
    scanf("%d",&i);
    printf("The value of i before passing is: %d\n",i);
    change(&i);
    printf("The value of i after passing is: %d",i);
    return 0;
}
int change(int *j)
{
    *j=*j*10;
    return *j;
}