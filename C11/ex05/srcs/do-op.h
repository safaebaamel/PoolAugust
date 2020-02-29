
#ifndef DO_OP_H
#define DO_OP_H

#include <unistd.h>

void	do_op(int a, int b, int i);
int	ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void 	ft_putstr(char *str);

int	add(int a, int b);
int	sub(int a, int b);
int	mod(int a, int b);
int	div(int a, int b);
int	mul(int a, int b);

int	ft_strcmp(char *s1, char *s2);

#endif
