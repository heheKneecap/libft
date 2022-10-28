/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:29:43 by mshchuts          #+#    #+#             */
/*   Updated: 2022/10/11 15:30:52 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	str = malloc(len + 1);
	if (!str)
		return (0);
	p = str;
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (str);
}
