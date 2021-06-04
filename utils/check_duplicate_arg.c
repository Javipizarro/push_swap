/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate_arg.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 12:28:37 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 20:22:27 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Checks whether the las included argument was already on the arguments list.
*/

#include "../push_swap.h"

int	check_duplicate_arg(t_push_swap *ps, unsigned int pos)
{
	unsigned int	i;

	i = 0;
	while (i < pos)
		if (ps->args_list[i] == ps->args_list[pos])
			return(2);
		else
			i++;
	return(0);
}