#include <stdio.h>
int main()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
        array[i]=5*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("5 * %d = %d\n",(i+1),array[i]);
    }
    
    return 0;
}