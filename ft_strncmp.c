
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
  while (n--)
    {
      if (ft_strcmp(s1, s2) != 0)
	return (ft_strcmp(s1, s2));
      s1++;
      s2++;
    }
  return (0);
}
