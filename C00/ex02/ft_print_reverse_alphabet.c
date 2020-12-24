/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 19:45:25 by rmanuel           #+#    #+#             */
/*   Updated: 2020/11/26 19:55:24 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char ralphabet;

	ralphabet = 'z';
	while (ralphabet >= 'a')
	{
		write(1, &ralphabet, 1);
		ralphabet--;
	}
}
