#include <stdio.h>
void avg(int a,int b,int c);
int main()
{
    int p,q,r;
    printf("Enter the three numbers\n");
    scanf("%d",&p);
    scanf("%d",&q);
    scanf("%d",&r);
    avg(p,q,r);
    return 0;
}
void avg(int a,int b,int c)
{
    float sum=a+b+c;
    float av=sum/3;
    printf("Average of three numbers is: %.2f",av);
}