/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 18:30:18 by aboukdid          #+#    #+#             */
/*   Updated: 2023/09/06 20:38:56 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * size + 1);
	if (range == 0)
	{
		return (0);
	}
	i = 0;
	while (i <= size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

int main()
{
	int i;
	int min;
	int max;
	int size;
	int *range;
	i = 0;
	min = 7;
	max = 14;
	size=max-min;
	range=ft_range(min, max);
	while(i<size)
	{
		printf("%d, ",range[i]);
		i++;
	}
}
