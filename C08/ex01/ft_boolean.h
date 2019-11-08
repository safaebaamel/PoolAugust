
# ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>

void	ft_putstr(char *str);

typedef unsigned int t_bool;

t_bool ft_is_even(int nb);

# ifndef EVEN
# define EVEN(nb) (nb % 2 == 0)
# endif

# ifndef TRUE
# define TRUE 1
# endif

# ifndef FALSE
# define FALSE 0
# endif

# ifndef SUCCESS
# define SUCCESS 0
# endif

# ifndef EVEN_MSG
# define EVEN_MSG "I have an even number of arguments"
# endif

# ifndef ODD_MSG
# define ODD_MSG "I have an odd number of arguments"
# endif

# endif
