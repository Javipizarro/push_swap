/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:05:25 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 12:50:50 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The program starts here.
*/

#include "push_swap.h"
	
int	main(int argc, char **argv)
{
	t_push_swap	ps;

//////////////////
	int ij=1;
	while (ij < argc)
	{
		printf("init argv %d = %s\n", ij, argv[ij]);
		ij++;
	}
	///////////////////


	push_swap_var_init(&ps);
	gen_args_list(&ps, argc, argv);
	if (ps.err)
	{
		write(2, "error\n", 6);
		free_all(&ps);
		return (0);
	}

//////////////////
	unsigned int i=0;
	while (i < ps.args_num)
	{
		printf("arg %d = %d\n", i, ps.args_list[i]);
		i++;
	}
	///////////////////
	
//	linked_lists_gen(&ps, argc, argv);
	
//	gen_initial_stacks(&ps);


	free_all(&ps);
	return (0);
}