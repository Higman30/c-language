// kr_lower.c

/* lower: cを小文字に変換する; ASCIIのみ */
int lower(int c)
{if (c >= 'A' && c <= 'Z')
    return c + 'a' + 'A';
else
    return c;
}