/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 17:59:02 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/16 22:31:14 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = malloc(len + 1);
	p = str;
	while (*src != '\0')
		*p++ = *src++;
	*p = '\0';
	return (str);
}
