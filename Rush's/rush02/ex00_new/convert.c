#include "rush02.h"

char	*convert(long long n, t_dict *dict)
{
	char	*res;

	if (n == 0)
		return (ft_strdup(find_word(dict, 0)));
	if (n < 100)
		return (convert_small(n, dict));
	res = ft_strdup("");
	if (!res)
		return (NULL);
	res = process_divs(&n, dict, res);
	if (!res)
		return (NULL);
	res = finalize_result(n, dict, res);
	return (res);
}
