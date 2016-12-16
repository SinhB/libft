
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int     i;
    char    *tmp;

    i = ft_strlen(s);
    tmp = (char*)s + i;
    while (i-- && *tmp != c)
        tmp--;
    return (*tmp == c ? tmp : NULL);
}
