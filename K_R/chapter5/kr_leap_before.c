// kr_leap_before.c

static char daytab[2][13] = {
    {0,31,28,31,30,31,30,31,31,30,31,30,31},
    {0,31,29,31,30,31,30,31,31,30,31,30,31}
};

/* day_of_year: 月と日から年内の通算日を求める */
int day_of_year(int year, int month, int day)
{
    int i;
    int leap;

    leap = year%4 ==0 && year%100 != 0 || year % 400 == 0;
    for (i = 1; i < month; i++)
        day += daytab[leap][i];
    return day;
}

/* month day: 歳の通算日から月と日を求める */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i;
    int leap;

    leap = year%4 ==0 && year%100 != 0 || year % 400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}
