/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 14:08:47 by rmanuel           #+#    #+#             */
/*   Updated: 2020/11/28 17:34:50 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnum(int num1, int num2)
{
	ft_putchar(num1 + '0');
	ft_putchar(num2 + '0');
}

void	ft_printnums(int esq, int dir)
{
	ft_printnum(esq / 10, esq % 10);
	ft_putchar(' ');
	ft_printnum(dir / 10, dir % 10);
	if (esq != 98 || dir != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int esq;
	int dir;

	esq = 0;
	dir = 0;
	while (esq <= 99)
	{
		while (dir <= 99)
		{
			if (esq == dir)
			{
				dir++;
				continue;
			}
			ft_printnums(esq, dir);
			dir++;
		}
		esq++;
		dir = esq + 1;
	}
}
