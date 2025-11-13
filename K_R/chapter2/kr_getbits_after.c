// kr_getbits_after.c

/* getbits: pの位置からnビットを取ってくる */
unsigned kr_getbits_after(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}