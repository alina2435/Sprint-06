int mx_strlen(char *s);

int mx_insertion_sort(char **arr, int size)
{
    int swap = 0;
    char *tmp = 0;
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (mx_strlen(arr[j - 1]) > mx_strlen(arr[j]))
            {
                tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
                swap++;
            }
        }
    }
    return swap;
}
