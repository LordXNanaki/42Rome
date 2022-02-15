/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:42:46 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/03 19:42:46 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
