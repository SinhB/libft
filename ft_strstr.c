
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
  if (!big)
    {
      if (*big == *little)
	return (big);
      else
	return (NULL);
    }
  while (*big)
    {
      if (ft_strnequ(little, big, ft_strlen(little)))
	return (big);
    }
  return (NULL);
}
