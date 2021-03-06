/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alepercq <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/08 18:08:38 by alepercq     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/31 20:03:31 by alepercq    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *str, char const *to_find)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(to_find) != 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[0])
			{
				j = 0;
				while (str[i + j] == to_find[j])
				{
					j = j + 1;
					if (j == ft_strlen(to_find))
						return ((char*)(str + i));
				}
			}
			i = i + 1;
		}
	}
	else
		return ((char*)str);
	return (NULL);
}
