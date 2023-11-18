#include <stdio.h>
int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("fileq3_1.txt", "r");
    ptr2 = fopen("fileq3_2.txt", "w");
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Failed to open files.\n");
    }
    else{
    char ch;
    while (1)
    {
        ch=fgetc(ptr1);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch,ptr2);
        }
    }
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}