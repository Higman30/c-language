// kr_lower_before.c

/* lower: cを小文字に変換する; ASCIIのみ */
int kr_lower_before(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
