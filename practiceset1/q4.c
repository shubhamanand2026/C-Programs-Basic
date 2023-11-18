#include <stdio.h>
int main()
{
    int p,r,t;
    float SI;
    printf("Enter principal\n");
    scanf("%d",&p);
    printf("Enter rate\n");
    scanf("%d",&r);
    printf("Enter time\n");
    scanf("%d",&t);
    SI=(p*r*t)/100;
    printf("Simple Interest is: %.2f",SI);
    return 0;
}