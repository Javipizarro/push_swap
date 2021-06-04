/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 21:28:31 by jpizarro          #+#    #+#             */
/*   Updated: 2021/05/23 21:52:36 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Appends string 'src' to the end of 'dst'.  It will append at most
**	'dstsize' - 'strlen(dst)' - 1 characters. It will then NUL-terminate,
**	unless 'dstsize' is 0 or the original 'dst' string was longer than
**	'dstsize' (in practice this should not happen as it means that either
**	'dstsize' is incorrect or that 'dst' is not a proper string).
**  Note that room for the nul should be included in dstsize.
**  If the 'src' and 'dst' strings overlap, the behargvior is undefined.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (d >= dstsize)
		return (dstsize + s);
	i = -1;
	while (++i < s && i < dstsize - d - 1)
		dst[d + i] = src[i];
	dst[d + i] = 0;
	return (d + s);
}
