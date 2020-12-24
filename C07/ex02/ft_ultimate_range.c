/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 21:03:38 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/17 15:14:36 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *ptr;
	int i;

	i = 0;
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (min >= max)
	{
		*ptr = 0;
		return (0);
	}
	if (ptr == NULL)
	{
		*ptr = 0;
		return (-1);
	}
	*range = ptr;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (size);
}
