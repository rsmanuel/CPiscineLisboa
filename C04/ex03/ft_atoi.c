/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <rmanuel@students.42lisboa>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 02:15:54 by rmanuel           #+#    #+#             */
/*   Updated: 2020/12/15 02:19:52 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' ||
		c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		else if (str[i] >= '0' && str[i] <= '9')
			num = num * 10 + str[i] - '0';
		else if ((is_whitespace(str[i]) == 0 && str[i] != '+') || num > 0)
			break ;
		i++;
	}
	return (num * sign);
}
