/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 15:24:59 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/17 00:51:50 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int i;
	long int result;

	i = 1;
	result = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (result <= nb)
	{
		i++;
		result = i * i;
	}
	if ((i - 1) * (i - 1) != nb)
		return (0);
	else
		return (i - 1);
}
