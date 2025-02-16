#include <stdbool.h>

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *src)
{
    if (!src)
        return 0;
    int result = 0;
    int sign = 1;
    while (mx_isspace(*src))
    {
        src++;
    }
    if (*src == '-')
    {
        sign = -1;
        src++;
    }
    else if (*src == '+')
    {
        src++;
    }
    while (mx_isdigit(*src))
    {
        int digit = *src - '0';
        if (result > (2147483647 - digit) / 10)
        {
            return sign == 1 ? 2147483647 : -2147483648;
        }

        result = result * 10 + digit;
        src++;
    }

    return result * sign;
}
