/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_link_for_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 10:49:03 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/24 11:13:33 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Generates a link t_list_link from the args_list to be stored in a stack.
*/

#include "../push_swap.h"

void	gen_link_for_stack(t_list_head *stack, int arg)
{
	t_list_link	*link;

	link = malloc(sizeof(t_list_link));
	link->elem = arg;
	link->prev = stack->last;
	link->next = NULL;
	stack->last->next = link;
	stack->last = link;
	if (!stack->first)
		stack->first = stack->last;
	else if (!stack->second)
		stack->second = stack->last;
}
