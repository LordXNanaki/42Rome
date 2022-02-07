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

char	*ft_check(char const *str1, char const *str2, int a, int b, int length, int d, char *string)
{
    while (str1[a] != '\0' && a < length)
    {
        while (str2[b] != '\0')
        {
            while(str2[b] == str1[a])
            {
                a++;
                b = 0;
            }
            b++;
        }
        b = 0;
        string[d] = str1[a];
        d++;
        a++;
    }
	return(string);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    int i;
    int j;
    int c;
	int len;

    len = ft_strlen((char *)s1);
    str = (char *)malloc(sizeof(char) * (len + 1));
    i = 0;
    j = 0;
    c = 0;
    if(!s1 || !set)
        return (0);
    return (ft_check(s1, set, i, j, len, c, str));    
}

int main()
{
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char *s2 = " ";

	printf("%s", ft_strtrim((const char *)s1, (const char *)s2));
	return (0);
}
