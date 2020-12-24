/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:39:39 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/01 15:05:45 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *tab, int i, int j)
{
	int value_i;
	int value_j;

	value_i = tab[i];
	value_j = tab[j];
	tab[i] = value_j;
	tab[j] = value_i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int index;
	int numswap;

	index = 0;
	numswap = 0;
	while (index <= size - 2)
	{
		if (tab[index] > tab[index + 1])
		{
			ft_swap(&tab[0], index, index + 1);
			numswap++;
		}
		index++;
		if (numswap > 0)
		{
			ft_sort_int_tab(&tab[0], size);
		}
	}
}
