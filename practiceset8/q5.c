#include <stdio.h>
void stringcopy(char *str1, char *str2);

int main()
{
    char str1[100], str2[100]="";
    printf("Enter 1st String: ");
    scanf("%s",str1);
    stringcopy(str1, str2);
    printf("%s",str2);
    return 0;
}

void stringcopy(char *str1, char *str2)
{
    while (*str1 != '\0')
    {
        *str2=*str1;
        str1++;
        str2++;
    }
}