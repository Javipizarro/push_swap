/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/11 21:26:05 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_push_swap *ps)
{	
	if (ps->size_b < 2)
		return ;
	swap(ps->stack_b);
	if (ps->instruc->num && ps->instruc->list[ps->instruc->num - 1] == SA)
		ps->instruc->list[ps->instruc->num - 1] = SS;
	else
		{
			ps->instruc->list[ps->instruc->num] = SB;
			ps->instruc->num++;
		}
}