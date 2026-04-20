#include "rush02.h"

char	*trim(char *s, int len)
{
	int		start;
	int		end;
	char	*r;
	int		i;

	start = 0;
	while (start < len && ft_isspace(s[start]))
		start++;
	end = len - 1;
	while (end >= start && ft_isspace(s[end]))
		end--;
	if (end < start)
		return (ft_strdup(""));
	r = malloc(end - start + 2);
	if (!r)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

int	is_num_str(char *s)
{
	int	i;

	i = 0;
	if (!s || !s[0])
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
