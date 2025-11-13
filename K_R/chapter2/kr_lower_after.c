// kr_lower_after.c

/* lower: cを小文字に変換する; ASCIIのみ */
int kr_lower_after(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
