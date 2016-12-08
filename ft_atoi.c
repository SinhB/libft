#include "libft.h"

int	ft_atoi(char *s)
{
  int result;
  int nega;
  int i;

  result = 0;
  nega = 1;
  i = 0;
  while (s[i] == 32 || s[i] == 9)
    i++;
  if (s[i] == '-' || s[i] == '+')
    {
      if (s[i] == '-')
	{
	  nega = -1;
	  i++;
	}
      else
	i++;
    }
  while (s[i] >= '0' && s[i] <= '9')
    {
      result += s[i] - 48;
      if (s[i + 1] >= '0' && s[i + 1] <= '9')
	result *= 10;
      i++;
    }
  return (result * nega);
}
