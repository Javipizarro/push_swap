/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_arg_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:44:48 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 12:24:32 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The arguments are transformed into an array of ints
**	if all of them are valid.
*/

#include "../push_swap.h"

int	gen_args_list(t_push_swap *ps, int argc, char **argv)
{
	unsigned int	i;
	char			**buff;


	buff = resplit_argv_by_spc(argc, argv);
	recount_args(ps, buff);
	ps->args_list = malloc(sizeof(int) * ps->args_num);
	i = 0;
	while (i < ps->args_num)
	{
		ps->err += arg_format_error(buff[i]);
		ps->err += 1 * (!ft_fitinint(buff[i]));
		ps->args_list[i] = atoi(buff[i]);
		ps->err += check_duplicate_arg(ps, i);
		if (ps->err)
			return (0);
		i++;
	}
	return (0);
}