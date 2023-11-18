#include <stdio.h>
#include <stdlib.h>
int main()
{
    float f;
    printf("Enter the NO. of element: ");
    scanf("%f",&f);
    float *ptr;
    ptr = (float *)malloc(f * sizeof(float));
    for(int i=0;i<(int)f;i++)
    {
        printf("Enter the value of element %d: ",i+1);
        scanf("%f",&ptr[i]);
    }

    for(int i=0;i<(int)f;i++)
    {
        printf("The value of element %d is: %.2f\n",(i+1),ptr[i]);
    }
    return 0;
}