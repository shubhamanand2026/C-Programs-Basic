#include <stdio.h>
int main()
{
    FILE *ptr1;
    ptr1=fopen("file_q5_1.txt","r");
    int n;
    fscanf(ptr1,"%d",&n);
    fclose(ptr1);
    printf("%d",n);

    ptr1=fopen("file_q5_1.txt","w");
    fprintf(ptr1,"%d",(n*2));
    fclose(ptr1);
    return 0;
}