// kr_month_name_after.c


/* month_name: n番目の月の名前を返す */
const char *kr_month_name_after(int n)
{
    static const char *name[] = {
        "Illegal month", "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October", "November",
        "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}
