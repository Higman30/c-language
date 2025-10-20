// kr_randtest.c
#include <stdio.h>

// kr_rand.c にある関数のプロトタイプ宣言
int rand(void);
void srand(unsigned int seed);

int main(void)
{
srand(1234);
for (int i=0;i<5;i++) printf("%d ", rand());
printf("\n");
srand(5678);
for (int i=0;i<5;i++) printf("%d ", rand());
printf("\n");

    return 0;
}