#include <stdio.h>
int main()
{
    int i=1;
    for(;;)
    {
        printf("%d",i);
        if(i=5)
        break;
    }
    return 0;
}