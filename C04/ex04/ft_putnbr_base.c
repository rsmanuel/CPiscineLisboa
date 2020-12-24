/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 23:16:20 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/10 18:21:44 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		check_repeatedchars(char *str, int length)
{
	int		i;
	int		j;
	char	chars[length];
	int		check_repeatedchars;

	i = 0;
	check_repeatedchars = 0;
	while (i < length)
	{
		j = 0;
		while (i > 0 && j < length && chars[j] != 0)
		{
			if (chars[j] == str[i])
			{
				check_repeatedchars = 1;
				break ;
			}
			j++;
		}
		chars[i] = str[i];
		i++;
	}
	return (check_repeatedchars);
}

int		base_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (check_repeatedchars(base, i + 1))
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = base_length(base);
	if (base_len < 2)
		return ;
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / base_len, base);
		write(1, &base[-nbr % base_len], 1);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= base_len)
		ft_putnbr_base(nbr / base_len, base);
	write(1, &base[nbr % base_len], 1);
}
