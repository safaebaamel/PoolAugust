#include "ft_stock_str.h"
void    ft_show_tab(struct s_stock_str *par);
struct	s_stock_str		*ft_strs_to_tab(int ac, char **av);


int main(int ac,char **av)
{
	
		ft_show_tab(ft_strs_to_tab(ac-1,&av[1]));
}
