/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_initial_stacks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:19:06 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/09 14:05:55 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This will generate the chains for the heaps of the push_swap project.
*/

#include "../push_swap.h"

void	gen_initial_stacks(t_push_swap *ps)
{
	free_stack(ps->stack_a);
	free_stack(ps->stack_b);
	create_stack_a(ps);
	ps->size_a = ps->args_num;
	ps->size_b = 0;
}
