/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:58:17 by aboukdid          #+#    #+#             */
/*   Updated: 2023/08/29 11:33:37 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*alloc;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	alloc = (int *)malloc(sizeof(int) * size + 1);
	if (alloc == 0)
	{
		return (0);
	}
	*range = alloc;
	i = 0;
	while (i <= size)
	{
		alloc[i] = min + i;
		i++;
	}
	return (size);
}
