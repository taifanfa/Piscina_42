#include "rush02.h"

static int	get_args(int argc, char **argv, char **dict, char **num)
{
	if (argc == 2)
	{
		*dict = "en.dict";
		*num = argv[1];
		return (0);
	}
	if (argc == 3)
	{
		*dict = argv[1];
		*num = argv[2];
		return (0);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	t_dict	dict;
	char	*dfile;
	char	*nstr;
	char	*res;

	if (get_args(argc, argv, &dfile, &nstr) < 0)
		return (ft_putstr("Error\n"), 1);
	if (!is_valid_num(nstr))
		return (ft_putstr("Error\n"), 1);
	if (parse_dict(dfile, &dict) < 0)
		return (ft_putstr("Dict Error\n"), 1);
	res = convert(ft_atoll(nstr), &dict);
	if (!res)
	{
		free_dict(&dict);
		return (ft_putstr("Dict Error\n"), 1);
	}
	ft_putstr(res);
	ft_putstr("\n");
	free(res);
	free_dict(&dict);
	return (0);
}
