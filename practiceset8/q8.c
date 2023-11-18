#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int c=0;
    printf("Enter a String: ");
    scanf("%s", str1);
    int n=strlen(str1);
    char str2[100] = "";
    for (int i = 0; i < n; i++)
    {
        str2[i] = str1[i];
        for (int j = 0; j < n; j++)
        {
            if(str2[i]==str1[j])
            {
                c++;
            }
        }
        printf("The occurance of charecter %c is: %d\n",str2[i],c);
        c=0;
    }
    return 0;
}