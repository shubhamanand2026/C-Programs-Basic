#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("fileq1.txt","r");
    int a,b,c;
    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);
    fscanf(ptr,"%d",&c);
    fclose(ptr);
    printf("value stored in a is: %d\n",a);
    printf("value stored in b is: %d\n",b);
    printf("value stored in c is: %d\n",c);
    return 0;
}