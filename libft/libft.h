#ifndef LIBFT_H
# define LIBFT_H

# include "libft.h"
# include <stdio.h>

int	ft_isalpha(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void*	ft_memalloc(size_t size);
int	ft_tolower(int c);
int	ft_toupper(int c);
void    ft_memdel(void **ap);
char*	ft_strnew(size_t size);
void	t_strdel(char **as);
void    ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);

#endif
