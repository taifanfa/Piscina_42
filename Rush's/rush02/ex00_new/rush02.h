#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define MAX_ENTRIES 512
# define BUF_SIZE 4096

typedef struct s_entry
{
	long long	key;
	char		*value;
}	t_entry;

typedef struct s_dict
{
	t_entry	entries[MAX_ENTRIES];
	int		size;
}	t_dict;

/* utils */
int			ft_strlen(char *s);
char		*ft_strdup(char *s);
char		*ft_strjoin(char *s1, char *s2);
void		ft_putstr(char *s);
int			ft_isdigit(char c);
int			ft_isspace(char c);
long long	ft_atoll(char *str);
int			is_valid_num(char *str);

/* dict */
char		*read_file(char *filename);
void		free_dict(t_dict *dict);
char		*find_word(t_dict *dict, long long key);

/* parsing */
char		*trim(char *s, int len);
int			is_num_str(char *s);
int			parse_dict(char *filename, t_dict *dict);

/* convert */
char	*append_word(char *res, char *word);
char	*convert_small(long long n, t_dict *dict);
char	*handle_div(long long *n, long long div, t_dict *dict);
char	*process_divs(long long *n, t_dict *dict, char *res);
char	*finalize_result(long long n, t_dict *dict, char *res);
char		*convert(long long n, t_dict *dict);

#endif

