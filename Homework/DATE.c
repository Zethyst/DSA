#include <stdio.h>
struct DATE{
int day,DOB_day;
int month,DOB_month;
int year,DOB_year;
}d1;
int main (void){
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int year_diff,month_diff,day_diff;
    float age;
    printf("Enter Today's Date: \n");
    printf("Day: \n");
    scanf("%d",&d1.day);
    fflush(stdin);
    printf("Month: \n");
    scanf("%d",&d1.month);
    fflush(stdin);
    printf("Year: \n");
    scanf("%d",&d1.year);
    fflush(stdin);


    printf("\nEnter your Date of Birth: \n");
    printf("Day: \n");
    scanf("%d",&d1.DOB_day);
    fflush(stdin);
    printf("Month: \n");
    scanf("%d",&d1.DOB_month);
    fflush(stdin);
    printf("Year: \n");
    scanf("%d",&d1.DOB_year);
    fflush(stdin);

    printf("\n\nToday's Date: %d/%d/%d",d1.day,d1.month,d1.year);
    printf("\nYour DOB: %d/%d/%d",d1.DOB_day,d1.DOB_month,d1.DOB_year);
    
    if(d1.DOB_day>d1.day){
        d1.day+=month[d1.DOB_month-1];
        d1.month-=1;
    }
    if(d1.DOB_month>d1.month){
        d1.year-=1;
        d1.month+=12;
    }
    day_diff=d1.day-d1.DOB_day;
    month_diff=d1.month-d1.DOB_month;
    year_diff=d1.year-d1.DOB_year;

    printf("\n\nYour Age:\nYears: %d  Months: %d Days: %d",year_diff,month_diff,day_diff);

return 0;
}