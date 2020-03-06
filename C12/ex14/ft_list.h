#ifndef __FT__LIST__H
#define __FT__LIST__H

typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}			t_list;

#endif
