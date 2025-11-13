// kr_getbits_before.c

/* getbits: pの位置からnビットを取ってくる */
unsigned kr_getbits_before(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}