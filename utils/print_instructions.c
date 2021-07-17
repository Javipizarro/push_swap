/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 08:20:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 08:26:51 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_instructions(t_push_swap *ps)
{
	unsigned int	i;

	i = 0;
	while (ps->instruc.list[i])
	{
		if (ps->instruc.list[i] == SA)
			printf("sa\n");
		else if (ps->instruc.list[i] == SB)
			printf("sb\n");
		else if (ps->instruc.list[i] == SS)
			printf("ss\n");
		else if (ps->instruc.list[i] == PA)
			printf("pa\n");
		else if (ps->instruc.list[i] == PB)
			printf("pb\n");
		else if (ps->instruc.list[i] == RA)
			printf("ra\n");
		else if (ps->instruc.list[i] == RB)
			printf("rb\n");
		else if (ps->instruc.list[i] == RR)
			printf("rr\n");
		else if (ps->instruc.list[i] == RRA)
			printf("rra\n");
		else if (ps->instruc.list[i] == RRB)
			printf("rrb\n");
		else if (ps->instruc.list[i] == RRR)
			printf("rrr\n");
		i++;
	}

}