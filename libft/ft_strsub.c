#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
        unsigned int    i;
        char            *tab;

        i = 0;
        while (s[i] != '\0')
                i++;
        tab = (char *)malloc(sizeof(char) * (i + 1));
        if (!tab)
                return (0);
        i = 0;
        while (s[i] != '\0')
        {
                tab[i] = (*f)(i, s[i]);
                i++;
        }
        tab[i] = '\0';
        return (tab);
}
