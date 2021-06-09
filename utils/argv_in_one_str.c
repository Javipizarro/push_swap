/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_in_one_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 21:22:45 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/09 11:37:44 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Generates a silgle string with all the arguments contained in 'argv'.
**	Uses a space ' ' as a separator between them.
**	Returns the string allocated with malloc.
*/

#include "../push_swap.h"

char	*argv_in_one_str(int argc, char **argv)
{
	char 	*str;
	char	*buff;
	int		i;

	i = 0;
	str = malloc(1);
	str[0] = 0;
	while (++i < argc)
	{
		buff = ft_strjoin(str, " ");
		free (str);
		str = ft_strjoin(buff, argv[i]);
		free (buff);
		buff = NULL;
	}
	return (str);
}