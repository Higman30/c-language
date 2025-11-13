// kr_rand_before.c

static unsigned long int next = 1;

/* rand: 0...32767の範囲の疑似乱数を返す */
int kr_rand_before(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768;
}


/* srand: rand()用の種を設定 */
void kr_srand_before(unsigned int seed)
{
    next = seed;
}
