#include <stdio.h>
int main()
{
    int n;
    printf("Enter the natural number for which you want multiplication table: ");
    scanf("%d",&n);
    int array[10];
    for(int i=0;i<10;i++)
    {
        array[i]=n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d * %d = %d\n",n,(i+1),array[i]);
    }
    
    return 0;
}