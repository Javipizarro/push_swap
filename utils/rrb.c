/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/12 13:37:56 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_push_swap *ps)
{	
	if (ps->size_b < 2)
		return ;
	ps->stack_b = ps->stack_b->up;
	if (ps->instruc.num && ps->instruc.list[ps->instruc.num - 1] == RRA)
		ps->instruc.list[ps->instruc.num - 1] = RRR;
	else
		{
			ps->instruc.list[ps->instruc.num] = RRB;
			ps->instruc.num++;
		}
}