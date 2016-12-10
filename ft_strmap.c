
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
  char *new;
  int i;

  i = 0;
  if (!(new = ft_strnew(ft_strlen(s))))
  return (NULL);
  while (s[i] != '\0')
    {
      new[i] = (*f)(s[i]);
      i++;
    }
  new[i] = '\0';
  return (new);
}
