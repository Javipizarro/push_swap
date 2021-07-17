/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fresh_instruc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 20:08:59 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/12 13:39:15 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	fresh_instruc(t_instructions *instruc)
{
	instruc->list = calloc(sizeof(char), instruc->list_size);
	instruc->num = 0;
}