#include <stdbool.h>

bool mx_isspace(char c)
{
    return (c == 32 || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}
