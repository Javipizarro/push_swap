/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_initial_stacks.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:19:06 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/24 11:19:52 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	This will generate the chains for the heaps of the push_swap project.
*/

#include "../push_swap.h"

void	gen_initial_stacks(t_push_swap *ps)
{
	unsigned int	i;

	ps->stack_a = malloc(sizeof(t_list_head));
	ps->stack_b = malloc(sizeof(t_list_head));
	ps->stack_a->first = NULL;
	ps->stack_a->second = NULL;
	ps->stack_a->last = NULL;
	ps->stack_b->first = NULL;
	ps->stack_b->second = NULL;
	ps->stack_b->last = NULL;
	i = 0;
	while (i <= ps->args_num)
		gen_link_for_stack(ps->stack_a, ps->args_list[i]);
}