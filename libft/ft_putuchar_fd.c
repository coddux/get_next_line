/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putuchar_fd.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/12 13:38:10 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 19:38:26 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putuchar_fd(int fd, wchar_t c)
{
	write(fd, &c, 1);
}
