
#include "libft.h"

void	*ft_memalloc(size_t size)
{
  void *alloc;

  if ((alloc = (void*)malloc(sizeof(char) * size)) == NULL)
    return (NULL);
  ft_bzero(alloc, size);
  return (alloc);
}
