#include<stdio.h>
int main()
{
    int days_user, days, months, years ;
    printf("Enter the number of Days: ");
    scanf("%d", &days_user);
    years = days_user/365;
    months = (days_user - years*365)/30;
    days = days_user - years*365 - months*30;
    printf("years %d\n",years);
    printf("months %d\n",months);
    printf("days %d\n",days);
    return 0;
}
