// kr_writelines_before.c


/* 出力行を書き出す */
void kr_writelines_before(char *lineptr[], int nlines)
{
    while (nlines-- > 0)
        printf("%s\n", *lineptr++);
}
