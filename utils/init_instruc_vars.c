/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_instruc_vars.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:47:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/09 19:55:10 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_instruc_vars(t_instructions *instruc)
{
	instruc->list = NULL;
	instruc->list_size = 128;
	instruc->num = 0;
}
