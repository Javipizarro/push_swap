/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fitinint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:42:47 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 19:18:00 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Checks whether the str argument can be stored into an int variable
**	with atoi without lossing information.
**	Returns 1 if it is possible or 0 if it is not.
*/

#include "libft.h"

int	ft_fitinint(char *str)
{
	long int	num;
	num = ft_atoli(str);
	return (num == (long int)(int)num && ft_strnlen(str, 12) < 12);
}
