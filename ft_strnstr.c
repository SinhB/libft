
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
  int i;

  i = 0;
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
	if (ft_strlen(little) + i <= len)
	  return (big);
      i++;
      big++;
    }
  return (NULL);
}
