// kr_echo_before.c

#include <stdio.h>

/* コマンド行の行数をエコーする ; 第1班 */
main(int argc, char *argv[])
{
    while (--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    printf("\n");

    return 0;
}
