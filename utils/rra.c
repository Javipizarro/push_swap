/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/12 13:37:56 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_push_swap *ps)
{	
	if (ps->size_a < 2)
		return ;
	ps->stack_a = ps->stack_a->up;
	if (ps->instruc.num && ps->instruc.list[ps->instruc.num - 1] == RRB)
		ps->instruc.list[ps->instruc.num - 1] = RRR;
	else
		{
			ps->instruc.list[ps->instruc.num] = RRA;
			ps->instruc.num++;
		}
}