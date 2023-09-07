/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:10:00 by aboukdid          #+#    #+#             */
/*   Updated: 2023/08/29 11:14:48 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
