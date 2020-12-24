/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:42:21 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/03 12:49:16 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alphanum(char a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	if (a >= 97 && a <= 122)
	{
		return (2);
	}
	if (a >= 48 && a <= 57)
	{
		return (3);
	}
	else
	{
		return (0);
	}
}

void	ft_low(char *a)
{
	if (ft_alphanum(*a) == 1)
	{
		*a = *a + 32;
	}
}

void	ft_up(char *a)
{
	if (ft_alphanum(*a) == 2)
	{
		*a = *a - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	ant;
	int		i;
	int		tipoant;

	i = 0;
	while (str[i] != '\0')
	{
		ant = str[i - 1];
		tipoant = ft_alphanum(ant);
		if (tipoant == 0)
		{
			ft_up(&str[i]);
		}
		else
		{
			ft_low(&str[i]);
		}
		i++;
	}
	return (str);
}
