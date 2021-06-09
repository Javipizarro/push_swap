/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_var_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 19:18:10 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 22:41:35 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	All the push_swap structure's variables that need it,
**	are initiated to NULL or to 0.
*/

#include "../push_swap.h"

void	init_push_swap_vars(t_push_swap *ps)
{
	ps->err = 0;
	ps->args_num = 0;
	ps->args_list = NULL;
	ps->stack_a = NULL;
	ps->stack_b = NULL;
}