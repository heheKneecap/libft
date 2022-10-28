/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:28:30 by mshchuts          #+#    #+#             */
/*   Updated: 2022/10/19 15:28:38 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (ft_strlen((char *)(s)) < start)
		len = 0;
	else if (ft_strlen((char *)(s) + start) < len)
		len = ft_strlen((char *)(s) + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	while (i < len && s[i])
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}
