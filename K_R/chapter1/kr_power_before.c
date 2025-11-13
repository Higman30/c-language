// kr_power_before.c


/* power: baseをn乗する ; n >= 0 */
int power(int base, int n)
{
    int i;
    int p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;

    return p;
}
