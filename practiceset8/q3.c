#include <stdio.h>
void stringlengthcalculator(char *str);
int main()
{
    char *str;
    printf("Enter a String: ");
    scanf("%s",str);
    stringlengthcalculator(str);
    return 0;
}
void stringlengthcalculator(char *str)
{
    int c=0;
    while(*str!='\0')
    {
        c++;
        str++;
    }
    printf("The length of the string is %d",c);
}