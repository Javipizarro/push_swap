/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 06:25:19 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_push_swap *ps)
{	
	if (!ps->stack_a)
		return ;
	push(&ps->stack_b, &ps->stack_a);
	ps->size_b++;
	ps->size_a--;
	ps->instruc.list[ps->instruc.num] = PB;
	ps->instruc.num++;
}