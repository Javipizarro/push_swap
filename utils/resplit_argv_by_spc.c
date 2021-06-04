/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resplit_argv_by_spc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:05:59 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/04 11:55:32 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes the argument list received in argv, and re-split them, based on the
**	spaces ' ' they migth content.
*/

#include "../push_swap.h"


char	**resplit_argv_by_spc(int argc, char **argv)
{
	char	*str;
	char	**buff;

	str = argv_in_one_str(argc, argv);
	buff = ft_split(str, ' ');
	free (str);
	str = NULL;
	return (buff);
}