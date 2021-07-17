/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 21:35:57 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 06:54:02 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list_link **dst, t_list_link **src)
{
	t_list_link	*pushed_link;

	pushed_link = cut_link(src);
	paste_link(dst, &pushed_link);
}