#include <stdio.h>
int main()
{
    char name[] = "Shubhamanand";
    char *ptr = &name[0];
    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }
    return 0;
}