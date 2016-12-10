
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char		*new;

  if (!(new = ft_strnew(ft_strlen(s1) + ft_strlen (s2))))
    return (NULL);
  ft_strcpy(new, s1);
  ft_strcat(new, s2);
  return (new);
}
