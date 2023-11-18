#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char ch;
    printf("Enter a String: ");
    scanf("%s", str1);
    int n = strlen(str1);
    printf("Enter a Charecter: ");
    scanf(" %c", &ch);
    int c = 0;

    for (int j = 0; j < n; j++)
    {
        if (ch == str1[j])
        {
            c++;
        }
    }
    if (c > 0)
    {
        printf("Yes, charecter '%c' is Present in the string %s\n", ch, str1);
    }
    else
    {
        printf("No, charecter '%c' is not Present in the string %s\n", ch, str1);
    }
    return 0;
}