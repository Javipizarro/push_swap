/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:43:04 by jpizarro          #+#    #+#             */
/*   Updated: 2021/04/05 20:21:20 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Locates the first occurrence of 'c' (converted to an unsigned char) in
**	string 's'. Returns a pointer to the byte located, or NULL if no such
**	byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*t;

	t = s;
	while (n-- > 0)
		if (*t++ == (unsigned char)c)
			return ((void *)--t);
	return (0);
}
