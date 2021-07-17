/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_instruc_vars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:47:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/22 07:18:59 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_instruc_vars(t_push_swap *ps)
{
	ps->instruc.list = NULL;
	ps->instruc.list_size = 128;
	ps->instruc.num = 0;
}
