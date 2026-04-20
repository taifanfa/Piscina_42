#include "rush02.h"

char	*find_word(t_dict *dict, long long key)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (dict->entries[i].key == key)
			return (dict->entries[i].value);
		i++;
	}
	return (NULL);
}

void	free_dict(t_dict *dict)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		free(dict->entries[i].value);
		i++;
	}
}

