/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:58:32 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/04 14:58:32 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	s3 = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	j = 0;
	if (!s3)
		return (0);
	while (s1[j] != '\0')
	{
		s3[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s3[i] = s2[j];
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
