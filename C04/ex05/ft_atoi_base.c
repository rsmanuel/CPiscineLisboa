/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 21:02:26 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/15 20:34:46 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int		pos_in_base(char a, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == a)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int		validate_base(char *base, int len)
{
	int i;
	int j;

	i = 0;
	if (len < 2)
		return (0);
	if (check_repeatedchars(base, len) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == ' ' ||
				base[i] == '\t' || base[i] == '\n' || base[i] == '\v' ||
				base[i] == '\f' || base[i] == '\r')
			return (0);
		i++;
	}
	return (1);
}

int		is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int minus;
	int num;
	int baselen;

	minus = 1;
	baselen = 0;
	while (base[baselen] != '\0')
		baselen++;
	if (validate_base(base, baselen) == 0)
		return (0);
	num = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (pos_in_base(str[i], base) >= 0)
			num = num * baselen + pos_in_base(str[i], base);
		else if (str[i] == '-')
			minus *= -1;
		else if ((is_whitespace(str[i]) == 0 && str[i] != '+') || num > 0)
			break ;
		i++;
	}
	return (num * minus);
}
