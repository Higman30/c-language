// kr_power2_before.c


/* power: baseのn乗のべき; n >= 0; 第2版 */
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;

    return p;
}
