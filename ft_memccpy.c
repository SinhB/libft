
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
  char *tmp;

  tmp = dest;
  while (n--)
    {
      if ((*tmp++ = *(unsigned char*)src++) == (unsigned char)c)
	{
	  dest = tmp;
	  return (dest);
	}
    }
  return (NULL);
}
