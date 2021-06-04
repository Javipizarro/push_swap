/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recount_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 12:00:50 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 12:12:04 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	recount_args(t_push_swap *ps, char **buff)
{
	while (buff[ps->args_num])
		ps->args_num++;
}
