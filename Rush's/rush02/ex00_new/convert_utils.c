#include "rush02.h"

char	*append_word(char *res, char *word)
{
	char	*tmp;
	char	*new;

	if (!word)
		return (res);
	if (res[0] == '\0')
	{
		free(res);
		return (ft_strdup(word));
	}
	tmp = ft_strjoin(res, " ");
	free(res);
	if (!tmp)
		return (NULL);
	new = ft_strjoin(tmp, word);
	free(tmp);
	return (new);
}

char	*convert_small(long long n, t_dict *dict)
{
	char	*word;
	long long	tens;
	long long	units;
	char	*res;

	word = find_word(dict, n);
	if (word)
		return (ft_strdup(word));
	if (n < 10)
		return (NULL);
	tens = (n / 10) * 10;
	units = n % 10;
	res = ft_strdup(find_word(dict, tens));
	if (!res)
		return (NULL);
	if (units > 0)
		res = append_word(res, find_word(dict, units));
	return (res);
}

char	*handle_div(long long *n, long long div, t_dict *dict)
{
	char	*res;
	char	*word;

	if (*n < div)
		return (ft_strdup(""));
	res = convert(*n / div, dict);
	if (!res)
		return (NULL);
	word = find_word(dict, div);
	if (!word)
	{
		free(res);
		return (NULL);
	}
	res = append_word(res, word);
	*n = *n % div;
	return (res);
}

char	*process_divs(long long *n, t_dict *dict, char *res)
{
	long long	divs[5];
	char		*tmp;
	int			i;

	divs[0] = 1000000000;
	divs[1] = 1000000;
	divs[2] = 1000;
	divs[3] = 100;
	divs[4] = 0;
	i = 0;
	while (divs[i])
	{
		if (*n >= divs[i])
		{
			tmp = handle_div(n, divs[i], dict);
			if (!tmp)
				return (NULL);
			res = append_word(res, tmp);
			free(tmp);
		}
		i++;
	}
	return (res);
}

char	*finalize_result(long long n, t_dict *dict, char *res)
{
	char	*tmp;

	if (n > 0)
	{
		tmp = convert_small(n, dict);
		if (!tmp)
			return (NULL);
		res = append_word(res, tmp);
		free(tmp);
	}
	return (res);
}
