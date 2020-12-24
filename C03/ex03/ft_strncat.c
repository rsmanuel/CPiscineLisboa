/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:11:51 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/06 22:14:43 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *dest1;

	dest1 = dest;
	while (*dest1 != '\0')
	{
		dest1++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest1 = *src;
		src++;
		dest1++;
		nb--;
	}
	*dest1 = '\0';
	return (dest);
}
