#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%97==0)
    {
        printf("%d is divisible by 97\n",n);
    }
    else{
        printf("%d is not divisible by 97\n",n);
    }
    return 0;
}