#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("generator.txt", "w");
    int a=10;
    fprintf(fptr,"This is how we enter any content in c language,like we insert this number: %d\n",a);
    fclose(fptr);
    return 0;
}