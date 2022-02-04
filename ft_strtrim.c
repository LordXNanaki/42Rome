/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 16:30:11 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/04 16:30:11 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int i;
    int j;
    i = ft_strlen((char *)s1);
    str = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while (set[j] != '\0')
        {
            if(set[j] == s1[i])
            {
                str[i] = (char)s1[i + 1];
            }
            j++;
        }
        str[i] = (char)s1[i];
        i++;
    }
    return (str);    
}

int main()
{
    char *a = "banana";
    char *b = "a";

    printf("%s", ft_strtrim((const char *)a, (const char *)b));
}