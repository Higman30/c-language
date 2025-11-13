// kr_hello_after.c

#include <stdio.h>  /* 標準ライブラリについての情報を取り込む */

int main(void)  /* 引数のないmainという名の関数を定義する */
{               /* mainの文は大カッコで囲む */
    printf("hello, world\n");   /* この文字列を印字するのにライブラリ関数 */
    return 0;   /* printfをmainで呼ぶ \nは改行記号 */
}
