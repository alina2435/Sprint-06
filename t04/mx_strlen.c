int mx_strlen(char *s)
{
    int n = 0;
    while (*s != '\0')
    {
        n++;
        s++;
    }
    return n;
}
