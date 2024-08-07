/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asyvash <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 16:39:06 by asyvash           #+#    #+#             */
/*   Updated: 2024/02/13 16:39:19 by asyvash          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(char c, int digits_in_base)
{
	int	max_digit;

	if (digits_in_base < 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

long	ft_strtol(const char *str, int str_base)
{
	long	result;
	int		digit;
	int		i;

	result = 0;
	i = 0;
	if (str[i] == '0' && str[i + 1] == 'x')
		i += 2;
	digit = get_digit(ft_tolower(str[i]), str_base);
	while (digit >= 0)
	{
		result = result * str_base + digit;
		i++;
		if (str[i])
			digit = get_digit(ft_tolower(str[i]), str_base);
		else
			break ;
	}
	return (result);
}
