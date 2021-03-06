/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 11:08:03 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 19:40:05 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	slen = (size_t)ft_strlen(src);
	dlen = (size_t)ft_strlen(dst);
	if (size < dlen)
		return (slen + size);
	i = 0;
	while ((src[i] != '\0') && ((dlen + i + 1) < size))
	{
		dst[dlen + i] = src[i];
		i = i + 1;
	}
	dst[dlen + i] = '\0';
	return (slen + dlen);
}
