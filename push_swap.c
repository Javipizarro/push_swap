/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:05:25 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/09 20:00:14 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The program starts here.
*/

#include "push_swap.h"
	
int	main(int argc, char **argv)
{
	t_push_swap	ps;

////////////////////
//	int ij=1;
//	while (ij < argc)
//	{
//		printf("init argv %d = %s\n", ij, argv[ij]);
//		ij++;
//	}
//	///////////////////


	init_all_vars(&ps);
	gen_args_list(&ps, argc, argv);
	if (ps.err)
	{
		write(2, "error\n", 6);
		free_all(&ps);
		return (0);
	}
	gen_initial_stacks(&ps);

//////////////////
	unsigned int i=0;
	t_list_link	*current_link = ps.stack_a;
	while (i < ps.args_num)
	{
		printf("arg %d = %d\tlink = %d\n", i, ps.args_list[i], current_link->elem);
		current_link = current_link->down;
		i++;
	}
	///////////////////
	


	free_all(&ps);
	return (0);
}