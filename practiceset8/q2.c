#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    char c;
    int i = 0;
    printf("Enter the string 1: ");

    scanf("%c", &c);
    while (c != '\n')
    {
        str1[i] = c;
        scanf("%c", &c);
        i++;
    }
    str1[i] = '\0';
    printf("Enter the string 2: ");
    scanf("%s", str2);
    int m = strcmp(str1, str2);
    printf("%d", m);
    return 0;
}
