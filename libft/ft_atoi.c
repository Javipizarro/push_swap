/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:41:59 by jpizarro          #+#    #+#             */
/*   Updated: 2021/04/05 21:18:54 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the initial portion of the string 'str' to int representation.
*/

#include "libft.h"

int	ft_atoi(char const *str)
{
	int	sol;
	int	sig;

	sol = 0;
	sig = -1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sig = 1;
	while (*str >= '0' && *str <= '9')
	{
		sol = (*str++ - '0') * -1 + sol * 10;
		if (sol > 0 && sig < 0)
			return (-1);
		else if (sol > 0 && sig >= 0)
			return (0);
	}
	return (sol *= sig);
}
