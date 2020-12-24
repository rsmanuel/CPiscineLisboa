/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:15:06 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/14 15:19:00 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char current_char;

	while (*str != '\0')
	{
		current_char = *str;
		if (current_char < 32 || current_char >= 127)
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[current_char / 16]);
			ft_putchar("0123456789abcdef"[current_char % 16]);
		}
		else
			ft_putchar(current_char);
		str++;
	}
}
