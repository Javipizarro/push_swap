/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:53:21 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/11 20:47:26 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Cuts the pointed link and replaces it in the pointer with the link that
**	takes its position, or null if the chains results empty.
**	Returns a pointer to the cut link.
*/

#include "../push_swap.h"

t_list_link	*cut_link(t_list_link *link)
{
	t_list_link	*cut_link;

	cut_link = link;
	if (link == link->down)
		link = NULL;
	else
	{
		link->down->up = link->up;
		link->up->down = link->down;
	}
	cut_link->up = cut_link;
	cut_link->down = cut_link;
	return (cut_link);
}