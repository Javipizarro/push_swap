/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:28:17 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 12:10:58 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"

//////////////
#include <stdio.h>
	//////////////

typedef struct s_list_link
{
	struct s_list_link		*next;
	struct s_list_link		*prev;
	int						elem;
}			t_list_link;

typedef struct s_list_head
{
	t_list_link		*first;
	t_list_link		*second;
	t_list_link		*last;
}			t_list_head;

typedef struct s_push_swap
{
	char			err;
	unsigned int	args_num;
	t_list_head		*stack_a;
	t_list_head		*stack_b;
	int				*args_list;
}			t_push_swap;

int		arg_format_error(char *arg);
int		gen_args_list(t_push_swap *ps, int argc, char **argv);
char	*argv_in_one_str(int argc, char **argv);
int		check_duplicate_arg(t_push_swap *ps, unsigned int pos);
void	free_all(t_push_swap *ps);
void	gen_initial_stacks(t_push_swap *ps);
void	gen_link_for_stack(t_list_head *stack, int arg);
void	push_swap_var_init(t_push_swap *ps);
void	recount_args(t_push_swap *ps, char **buff);
char	**resplit_argv_by_spc(int argc, char **argv);

