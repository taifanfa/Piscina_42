#include "rush02.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	char	*r;
	int		i;

	r = malloc(ft_strlen(s) + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (s[i])
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*r;
	int		l1;
	int		l2;
	int		i;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	r = malloc(l1 + l2 + 1);
	if (!r)
		return (NULL);
	i = -1;
	while (++i < l1)
		r[i] = s1[i];
	i = -1;
	while (++i < l2)
		r[l1 + i] = s2[i];
	r[l1 + l2] = '\0';
	return (r);
}

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
