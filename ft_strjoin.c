/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:26:58 by mshchuts          #+#    #+#             */
/*   Updated: 2022/10/19 15:27:06 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*result;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	result = malloc(lens1 + lens2 + 1);
	if (result)
	{
		ft_memcpy(result, s1, lens1);
		ft_memcpy(result + lens1, s2, lens2 + 1);
	}
	return (result);
}
