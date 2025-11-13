// kr_strindex_before.c


/* strindex: sにおける　tのインデックスを返す、どこにもなければ-1 */
int kr_strindex_before(char s[], char t[])
{
        int i;
        int j;
        int k;

        for (i = 0; s[i] != '\0'; i++)
        {
            for ( j = i, k = 0; t[k]!='\0' && s[j]==t[k]; j++, k++)
                ;
            if (k > 0 && t[k] == '\0')
                return i;
        }

    return -1;
}