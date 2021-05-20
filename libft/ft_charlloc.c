/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charlloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 06:08:15 by jpizarro          #+#    #+#             */
/*   Updated: 2021/04/05 20:56:39 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates enough space in memory for a string 'len' chars long,
**  The in the allocated memory, 'len' bytes are filled with the value 'c',
**  and the last one, with the value 0.
**  Returns a pointer to the allocated memory.
*/

#include "libft.h"

void	*ft_charlloc(size_t len, char c)
{
	void	*s;

	s = malloc(len + 1);
	if (!s)
		return (NULL);
	ft_bchar(s, len, c);
	return (s);
}
