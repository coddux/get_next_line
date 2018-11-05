/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstadd.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/15 19:04:01 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 19:13:28 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *blst)
{
	if ((!alst) || (!blst))
		return ;
	else
	{
		blst->next = *alst;
		*alst = blst;
		return ;
	}
}
