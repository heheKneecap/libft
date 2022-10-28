/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:48:46 by mshchuts          #+#    #+#             */
/*   Updated: 2022/10/11 14:50:29 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	character;

	s = (unsigned char *)str;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s == character)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (0);
}
