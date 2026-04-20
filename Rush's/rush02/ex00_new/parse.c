#include "rush02.h"

int	add_entry(char *line, int len, t_dict *dict)
{
	int		col;
	char	*key;
	char	*val;

	if (dict->size >= MAX_ENTRIES)
		return (-1);
	col = 0;
	while (col < len && line[col] != ':')
		col++;
	if (col >= len)
		return (-1);
	key = trim(line, col);
	val = trim(line + col + 1, len - col - 1);
	if (!key || !val || !is_num_str(key) || val[0] == '\0')
	{
		free(key);
		free(val);
		return (-1);
	}
	dict->entries[dict->size].key = ft_atoll(key);
	dict->entries[dict->size].value = val;
	dict->size++;
	free(key);
	return (0);
}

static int	process_line(char *pos, char *end, t_dict *dict)
{
	int	len;

	len = end - pos;
	if (len <= 0)
		return (0);
	return (add_entry(pos, len, dict));
}

int	parse_dict(char *filename, t_dict *dict)
{
	char	*content;
	char	*pos;
	char	*end;

	dict->size = 0;
	content = read_file(filename);
	if (!content)
		return (-1);
	pos = content;
	while (*pos)
	{
		end = pos;
		while (*end && *end != '\n')
			end++;
		if (process_line(pos, end, dict) < 0)
		{
			free(content);
			free_dict(dict);
			return (-1);
		}
		if (*end)
			pos = end + 1;
		else
			pos = end;
	}
	free(content);
	return (0);
}

