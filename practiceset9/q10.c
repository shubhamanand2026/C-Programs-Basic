#include <stdio.h>
typedef struct date_input
{
    int d;
    int m;
    int y;
} n_date;

void compare_dates(n_date date1, n_date date2)
{
    if (date2.y > date1.y)
    {
        printf("The date %d/%d/%d is most recent.", date2.d, date2.m, date2.y);
    }
    else if (date2.y < date1.y)
    {
        printf("The date %d/%d/%d is most recent.", date1.d, date1.m, date1.y);
    }
    else
    {
        if (date2.m > date1.m)
            printf("The date %d/%d/%d is most recent.", date2.d, date2.m, date2.y);
        else if (date2.m < date1.m)
            printf("The date %d/%d/%d is most recent.", date1.d, date1.m, date1.y);
        else
        {
            if (date2.d > date1.d)
                printf("The date %d/%d/%d is most recent.", date2.d, date2.m, date2.y);
            else if (date2.d < date1.d)
                printf("The date %d/%d/%d is most recent.", date1.d, date1.m, date1.y);
            else
                printf("The both dates %d/%d/%d are same.", date1.d, date1.m, date1.y);
        }
    }
}
int main()
{
    n_date d1, d2;
    printf("Enter 1st date: ");
    scanf("%d %d %d", &d1.d, &d1.m, &d1.y);
    printf("Enter 2nd date: ");
    scanf("%d %d %d", &d2.d, &d2.m, &d2.y);
    compare_dates(d1, d2);
    return 0;
}