#include <stdio.h>

struct complex
{
    int x;
    int y;
};

void display(struct complex *ptr)
{
    for(int i=0;i<5;i++)
    {
        printf("Complex number %d is: %d + (%di)\n",i+1,ptr->x,ptr->y);
        ptr++;
    }
}
int main()
{
    struct complex com[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter x-axis of complex %d number: ", i + 1);
        scanf("%d", &com[i].x);
        printf("Enter y-axis of complex %d number: ", i + 1);
        scanf("%d", &com[i].y);
    }
    display(&com[0]);
    return 0;
}