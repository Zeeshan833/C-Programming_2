#include <stdio.h>
#include <stdlib.h>

int main()
{

    int days;
    int weeks;
    int years;
    printf("enter days:");
    scanf("%d", &days);
    ;
    years = (days/ 365);
    weeks = (days % 365)/7;
    days = days- ((years * 365)+ (weeks*7));
    printf("years: %d\n", years);
    printf("days: %d\n", days);
    printf("weeks: %d\n", weeks);
    return 0;
}
