// kr_bitcount_before.c

/* bitcount: xの中の1であるビットを教える */
int kr_bitcount_before(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;

    return b;
}