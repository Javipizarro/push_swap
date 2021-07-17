/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_staks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 19:32:45 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 20:18:17 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	ONLY USEFUL WHEN DEVELOPING!!
*/

#include "../push_swap.h"

long int	check_chain(t_list_link *chain, unsigned int size)
{
	long int	i;

	i = 0;
	while (i < size)
	{
		if (chain->up->down != chain || chain->down->up != chain)
			return (i);
		else
			i++;
	}
	return (-1);
}

void	check_stacks(t_push_swap *ps)
{
	long int	err;

	err = check_chain(ps->stack_a, ps->size_a);
	if (err != -1)
		printf("ERROR IN STACK A, LINK %ld\n", err);
	else
		printf("stack A is OK\n");	
	err = check_chain(ps->stack_b, ps->size_b);
	if (err != -1)
		printf("ERROR IN STACK B, LINK %ld\n", err);
	else
		printf("stack B is OK\n");	
}