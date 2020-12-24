/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:14:43 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/08 03:24:12 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int destsize;

	i = 0;
	i = ft_strlen(dest);
	destsize = i;
	if (size == 0)
		return (ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && j + i < size - 1)
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (size < destsize)
		return (ft_strlen(src) + size);
	return (destsize + ft_strlen(src));
}
