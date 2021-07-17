/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:28:17 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 20:22:07 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

//////////////
#include <stdio.h>
	//////////////

#define		SA		0x1
#define		SB		0x2
#define		SS		0x3
#define		RA		0x4
#define		RB		0x8
#define		RR		0xc
#define		RRA		0x10
#define		RRB		0x20
#define		RRR		0x30
#define		PA		0x40
#define		PB		0x80

typedef struct s_list_link
{
	struct s_list_link		*up;
	struct s_list_link		*down;
	int						elem;
}			t_list_link;

typedef struct s_instructions
{
	unsigned char	*list;
	unsigned int	list_size;
	unsigned int	num;
}			t_instructions;

typedef struct s_push_swap
{
	char			err;
	t_list_link		*stack_a;
	t_list_link		*stack_b;
	unsigned int	size_a;
	unsigned int	size_b;
	unsigned int	args_num;
	int				*args_list;
	t_instructions	instruc;
}			t_push_swap;

int				arg_format_error(char *arg);
char			*argv_in_one_str(int argc, char **argv);
int				check_duplicate_arg(t_push_swap *ps, unsigned int pos);
void			create_stack_a(t_push_swap *ps);
t_list_link		*cut_link(t_list_link **link);
void			free_all(t_push_swap *ps);
void			free_stack(t_list_link *current_link);
void			fresh_instruc(t_instructions *instruc);
void			gen_args_list(t_push_swap *ps, int argc, char **argv);
void			gen_initial_stacks(t_push_swap *ps);
void			init_all_vars(t_push_swap *ps);
void			init_instruc_vars(t_push_swap *ps);
void			init_push_swap_vars(t_push_swap *ps);
void			pa(t_push_swap *ps);
void			paste_link(t_list_link **list, t_list_link **link);
void			pb(t_push_swap *ps);
void			print_instructions(t_push_swap *ps);
void			push(t_list_link **dst, t_list_link **src);
void			ra(t_push_swap *ps);
void			rb(t_push_swap *ps);
void			rra(t_push_swap *ps);
void			rrb(t_push_swap *ps);
void			recount_args(t_push_swap *ps, char **buff);
char			**resplit_argv_by_spc(int argc, char **argv);
void			sa(t_push_swap *ps);
void			sb(t_push_swap *ps);
void			swap(t_list_link **list);


///////////
void	check_stacks(t_push_swap *ps);
