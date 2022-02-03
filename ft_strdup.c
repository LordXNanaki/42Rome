/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:25:39 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/03 18:25:39 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

char    *ft_strdup(const char *s)
{
    unsigned char   *ptr1;
    int             j;

    j = ft_strlen((char *)s);
    ptr1 = (char *)malloc(len * sizeof(char) + 1);
    if (s == 0)
        return(0)
    while (j >= 0)
    {
        ptr1[j] = s[j];
        j--;
    }
    return (ptr1);
}