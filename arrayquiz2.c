#include <stdio.h>
int main()
{
    int a=7;
    int b=4;
    int *i=&a;
    int *j=&b;
    printf("The value stored in pointer a is: %u\n",i);
    i=i+1; //or we can also write it as i++;
    printf("Now the value of pointer i becomes : %u\n",i);
    i=i-1;
    printf("Now the value of pointer i becomes : %u\n",i);
    printf("Now the value of pointer j becomes : %u\n",j);

    printf("Subtraction of one pointer from another is: %u\n",i-j);
    

    if (i<j)
    {
        printf("Pointer J is bigger\n");
    }
    else
    {
        printf("Pointer I is bigger\n");
    }
    return 0;
}