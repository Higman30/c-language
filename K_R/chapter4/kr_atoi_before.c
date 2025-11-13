// kr_atoi_before.c


/* kr_atoi: atofを使って文字列sを整数に変換する */
int kr_atoi_before(char s[])
{
    double atof(char s[]);

    return (int) kr_atof(s);
}