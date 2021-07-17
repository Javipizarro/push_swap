/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/12 13:37:56 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_push_swap *ps)
{	
	if (ps->size_b < 2)
		return ;
	ps->stack_b = ps->stack_b->down;
	if (ps->instruc.num && ps->instruc.list[ps->instruc.num - 1] == RA)
		ps->instruc.list[ps->instruc.num - 1] = RR;
	else
		{
			ps->instruc.list[ps->instruc.num] = RB;
			ps->instruc.num++;
		}
}