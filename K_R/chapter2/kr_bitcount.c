// kr_bitcount.c

/* kr_bitcount: xの中の1であるビットを教える */
int bitcount(unsigned x)
{
    int b;

    i = j = 0;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;

    return b;
}