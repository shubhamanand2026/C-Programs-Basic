#include <stdio.h>
int count(int n)
{
    int array[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&array[i]);
        if(array[i]>0)
        {
            c++;
        }
    }
    return c;

}
int main()
{
    int a;
    printf("Enter the number of terms in array: ");
    scanf("%d",&a);
    printf("The number of positive elements in array is: %d",count(a));
    return 0;
}