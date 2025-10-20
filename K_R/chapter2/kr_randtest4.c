// kr_randtest.c
#include <stdio.h>

// kr_rand.c にある関数のプロトタイプ宣言
int rand(void);
void srand(unsigned int seed);

int main(void)
{
    int min=32767;
    int max=0;
    srand(1);
    for (int i=0;i<100000;i++){
        int r = rand();
        if (r<min) min=r;
        if (r>max) max=r;
    }

    printf("min=%d max=%d\n", min, max);  // だいたい 0 と 32767 付近

    return 0;
}