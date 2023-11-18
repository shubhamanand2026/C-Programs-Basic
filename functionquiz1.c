#include <stdio.h>
void good_morning(); // function prototype
void good_evening(); // function prototype
void good_night();   // function prototype
int main()
{
    good_morning(); // function call
    good_evening(); // function call
    good_night();   // function call
    return 0;
}
void good_morning() // function Defination
{
    printf("Good Morning\n");
}
void good_evening() // function Defination
{
    printf("Good Evening\n");
}
void good_night() // function Defination
{
    printf("Good Night\n");
}
