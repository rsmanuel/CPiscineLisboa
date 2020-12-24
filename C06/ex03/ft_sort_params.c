/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 20:52:29 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/13 23:29:48 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	putstring(char *str)
{
	int		i;

	i = 0;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*args;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			args = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = args;
			i = 0;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
	{
		putstring(argv[i]);
	}
	return (0);
}
