/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:40:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 19:18:55 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list_link **list)
{
	t_list_link	*new_first;

	new_first = (*list)->down;
	new_first = cut_link(&new_first);
	paste_link (list, &new_first);
}