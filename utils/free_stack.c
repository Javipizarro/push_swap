/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:26:47 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/08 13:30:39 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_list_link *current_link)
{
	if (current_link)
	{
		current_link->up->down = NULL;
		if (current_link->down)
			free_stack(current_link->down);
		free(current_link);
		current_link = NULL;
	}
}
