/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 11:49:51 by jpizarro          #+#    #+#             */
/*   Updated: 2021/06/09 11:59:32 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Undoes what split does
*/

#include "libft.h"

void	ft_free_split(char **split)
{
	int	i;
	
	i = 0;
	while (split[i])
	{
		free (split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
	split = NULL;
}