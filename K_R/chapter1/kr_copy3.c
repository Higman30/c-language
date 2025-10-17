// kr_copy3.c


/* 入力を出力に複写:第2版 */
int copy3(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
    
    return 0;
}