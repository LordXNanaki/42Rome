/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:40:18 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/03 18:40:18 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    unsigned int    i;
    unsigned int    j;

    if(s = 0)
        return (0);
    j = ft_strlen((char *)s);
    if (j < len)
        str = (char *)malloc(j * sizeof(char) + 1);
    else
        str = (char *)malloc(len * sizeof(char) + 1);
    i = 0;
    if (str == 0)
        return (0);
    while (i <= j && len > 0 && start <= 1)
    {
        str[i] = s[start];
        i++;
        start++;
        len--;
    }
    str[i] = '\0';
    return (str);
}