
#include "libft.h"

char	*ft_strnew(size_t size)
{
  char *new;

  if ((new = (char*)malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  ft_bzero(new, size + 1);
  return(new);
}
