/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 10:05:25 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 20:36:35 by jpizarro         ###   ########.fr       */
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
	
pb(&ps);
pb(&ps);
//pb(&ps);
sb(&ps);
sa(&ps);
//pa(&ps);
//pa(&ps);
//pa(&ps);


ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rb(&ps);
ra(&ps);
rrb(&ps);
rra(&ps);
rrb(&ps);
//////////////////
	check_stacks(&ps);
	//////////////////


//////////////////
	i=0;
	current_link = ps.stack_a;
	while (i < ps.size_a)
	{
		printf("stack A %d = %d\n", i, current_link->elem);
		current_link = current_link->down;
		i++;
	}
	i=0;
	current_link = ps.stack_b;
	while (i < ps.size_b)
	{
		printf("stack B %d = %d\n", i, current_link->elem);
		current_link = current_link->down;
		i++;
	}
	///////////////////

//////////////////
	printf("////////////////////#####-----_____output_____-----#####\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	///////////////////
	
	print_instructions(&ps);

//////////////////
	printf("////////////////////#####-----_____......_____-----#####\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
	printf("instructions list size = %d\n", ps.instruc.list_size);
	printf("instructions quantity = %d\n", ps.instruc.num);
	///////////////////
	free_all(&ps);
	return (0);
}