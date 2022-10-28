/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshchuts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:08:19 by mshchuts          #+#    #+#             */
/*   Updated: 2022/10/11 15:09:48 by mshchuts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;

	array = (void *)malloc(size * nitems);
	if (!array)
		return (NULL);
	ft_bzero(array, size * nitems);
	return ((void *)array);
}
