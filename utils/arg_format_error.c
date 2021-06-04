/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_format_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:54:49 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 19:34:00 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The format of each argument is validated here.
*/

#include "../push_swap.h"

int	arg_format_error(char *arg)
{
	int i;

	i = 0;
	while (i)
		if (!ft_isdigit(arg[i] || (i == 0 && (arg[i] == '-' || arg[i] == '+'))))
			return (2);
		else
			i++;
	return(0);
}