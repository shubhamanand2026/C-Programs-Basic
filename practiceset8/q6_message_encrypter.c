#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    char ch1,ch2;
    printf("Enter a String to Encrypt: ");
    gets(str);
    int n = strlen(str);
    int p;
    for (int j = 0; j < n; j++)
    {
        ch1 = str[j];
        p=ch1;
        p=p+3;
        ch2=p;
        str[j]=ch2;
    }
    printf("New encrypted String is: %s",str);
    return 0;
}