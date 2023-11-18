#include <stdio.h>

typedef struct complex
{
    int x;
    int y;
} c;

int main()
{
    c com[2];
    printf("Enter x-axis of 1st complex number: ");
    scanf("%d",&com[0].x);
    printf("Enter y-axis of 1st complex number: ");
    scanf("%d",&com[0].y);
    printf("Enter x-axis of 2nd complex number: ");
    scanf("%d",&com[1].x);
    printf("Enter y-axis 2nd complex number: ");
    scanf("%d",&com[1].y);
    return 0;
}