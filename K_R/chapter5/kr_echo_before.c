// kr_echo_before.c

#include <stdio.h>

/* コマンド行の行数をエコーする ; 第1班 */
main(int argc, char *argv[])
{
    int i;

    for (i = 1; i < argc; i++)
        printf("%s%s", argv[i], (i < argc-1) ? " " : "");
    printf("\n");

    return 0;
}
