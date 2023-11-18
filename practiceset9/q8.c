#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct bank
{
    double account_number;
    double IFSC_code;
    char name[30];
    int money;
}bank_details;

int main()
{
    bank_details c1;
    printf("Enter Account Number: ");
    scanf("%lf",&c1.account_number);
    printf("Enter IFSC code: ");
    scanf("%lf",&c1.IFSC_code);
    printf("Enter Name of Account Holder: ");
    scanf("%s",&c1.name);
    printf("Enter Money in account: ");
    scanf("%d",&c1.money);
    return 0;
}