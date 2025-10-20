// kr_randtest.c
#include <stdio.h>

// kr_rand.c にある関数のプロトタイプ宣言
int rand(void);
void srand(unsigned int seed);

int main(void)
{
    // 乱数の種（シード）を設定
    srand(1234);

    // 最初の10個の乱数を表示
    for (int i = 0; i < 10; i++) {
        printf("%d\n", rand());
    }

    return 0;
}