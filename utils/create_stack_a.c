/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 12:24:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/08 21:08:18 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_stack_a(t_push_swap *ps)
{
	unsigned int	i = 1;
	t_list_link	*current_link;

	if (!ps->args_num)
		return ;
	current_link = malloc(sizeof(t_list_link));
	current_link->elem = ps->args_list[0];
	ps->stack_a = current_link;
	while (i < ps->args_num)
	{
		current_link->down = malloc(sizeof(t_list_link));
		current_link->down->up = current_link;
		current_link = current_link->down;
		current_link->elem = ps->args_list[i];
		i++;
	}
	current_link->down = ps->stack_a;
	ps->stack_a->up = current_link;
}
