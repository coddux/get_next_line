/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memrealloc.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/19 12:45:38 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 19:15:30 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrealloc(void *v, size_t size)
{
	void	*vr;

	if (!v || !size)
		return (NULL);
	if (!(vr = ft_strnew(size)))
		return (NULL);
	ft_strcpy(vr, v);
	return (vr);
}
