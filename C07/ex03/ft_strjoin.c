/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 15:29:37 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/16 21:55:13 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int		ft_totallen(char **strs, int size)
{
	int i;
	int j;
	int totallen;

	i = 0;
	totallen = 0;
	while (i < size)
	{
		totallen = totallen + ft_strlen(strs[i]);
		i++;
	}
	return (totallen);
}

char	*ft_strcat(char *dest, char *src)
{
	char *dest1;

	dest1 = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;
	int		sepsize;

	sepsize = ft_strlen(sep) * size - 1;
	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		*ptr = 0;
		return (ptr);
	}
	ptr = (char *)malloc(sizeof(char) *
			(ft_totallen(strs, size) + sepsize + 1));
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}
