#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n)
{
    char *str;

    str = s;
    while (n > 0)
    {
        *str = c;
        str++;
        n--;
    }
    return (s);
}