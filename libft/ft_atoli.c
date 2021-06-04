/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoli.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:41:59 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 18:53:14 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts the initial portion of the string 'str' to long int representation.
*/

#include "libft.h"

long int	ft_atoli(char const *str)
{
	long int	sol;
	int			sig;

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
