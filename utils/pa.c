/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:23:52 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/11 21:52:56 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_push_swap *ps)
{	
	if (!ps->stack_b)
		return ;
	push(ps->stack_a, ps->stack_b);
	ps->size_a++;
	ps->size_b--;
	ps->instruc->list[ps->instruc->num] = PA;
	ps->instruc->num++;
}