/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 09:06:55 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push_swap *ps)
{	
	if (ps->size_a < 2)
		return ;
	swap(&ps->stack_a);
	if (ps->instruc.num && ps->instruc.list[ps->instruc.num - 1] == SB)
		ps->instruc.list[ps->instruc.num - 1] = SS;
	else
		{
			ps->instruc.list[ps->instruc.num] = SA;
			ps->instruc.num++;
		}
}