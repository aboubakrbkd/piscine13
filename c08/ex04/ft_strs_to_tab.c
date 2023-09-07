/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:22:04 by aboukdid          #+#    #+#             */
/*   Updated: 2023/09/04 23:12:37 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		a;
	char	*b;
	char	*c;

	a = ft_strlen(src);
	b = (char *)malloc(sizeof(char) * (a + 1));
	if (b == 0)
		return (0);
	c = b;
	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (b);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*alloc;

	alloc = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!alloc)
	{
		return (0);
	}
	i = 0;
	while (i < ac)
	{
		alloc[i].size = ft_strlen(av[i]);
		alloc[i].str = av[i];
		alloc[i].copy = ft_strdup(av[i]);
		i++;
	}
	alloc[i].str = 0;
	alloc[i].copy = 0;
	return (alloc);
}
