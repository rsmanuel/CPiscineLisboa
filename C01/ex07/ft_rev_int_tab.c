/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:29:13 by rmanuel           #+#    #+#             */
/*   Updated: 2020/11/30 17:59:25 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int i;

	index = 0;
	while (index < size / 2)
	{
		i = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = i;
		index++;
	}
}
