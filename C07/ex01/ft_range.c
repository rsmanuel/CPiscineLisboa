/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 21:13:57 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/16 22:21:05 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int range;
	int *ptr;
	int i;

	i = 0;
	range = max - min;
	ptr = (int *)malloc(range * sizeof(int));
	if (min >= max)
		return (0);
	if (ptr == NULL)
		return (0);
	while (i < range)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
