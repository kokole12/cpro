char *charArray(int size, char c)
{
    char *ptArray;

    ptArray = malloc(size * sizeof(c));

    int count;
    for (count = 0; count < size; count++)
    {
        ptArray[0] = c;
    }

    return ptArray;
}