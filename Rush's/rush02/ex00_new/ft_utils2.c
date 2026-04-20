#include "rush02.h"

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\r' || c == '\n');
}

long long	ft_atoll(char *str)
{
	long long	r;
	int			i;

	r = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r);
}

int	is_valid_num(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

