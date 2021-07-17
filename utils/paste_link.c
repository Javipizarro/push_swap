/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paste_link.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 20:27:18 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 06:31:36 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Pastes the link pointed by link, in the place pointed by list.
**	After placing the link, the list pointer will point at the pasted link,
**	so it is pointing at the same place on the list that it used to point.
*/

#include "../push_swap.h"

void	paste_link(t_list_link **list, t_list_link **link)
{
	if (*list)
	{
		(*link)->down = *list;
		(*link)->up = (*list)->up;
		(*link)->down->up = *link;
		(*link)->up->down = *link;
	}
	*list = *link;
}