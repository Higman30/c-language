// kr_echo2_after.c

#include <stdio.h>

/* コマンド行の行数をエコーする ; 第2班 */
int main(int argc, char *argv[])
{
    while (--argc > 0)
        printf("%s%s", *++argv, (argc > 1) ? " " : "");

    printf("\n");

    return 0;
}
