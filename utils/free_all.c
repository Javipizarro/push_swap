/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:15:32 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 22:21:45 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Liberates all the memory that has been allocated for push_swap.
*/

#include "../push_swap.h"

void	free_all(t_push_swap *ps)
{
	if (ps->args_list)
		free (ps->args_list);
	push_swap_var_init(ps);
}