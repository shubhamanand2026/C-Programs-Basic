#include <stdio.h>
int main()
{

    int array[10][5][3];
    int *ptr=&array[0][0][0];
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<5;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("The adress of (%d,%d,%d) is: %u\n",i+1,j+1,k+1,ptr);
                ptr++;
            }
        }
    }
    return 0;
}