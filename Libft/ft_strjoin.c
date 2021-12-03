/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 01:27:55 by mathis            #+#    #+#             */
/*   Updated: 2021/12/03 01:53:04 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
        size_t  i;
        size_t  j;
        char    *res;

        i = 0;
        j = 0;
        res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
        if (!res)
                return (0);
        while (s1[i])
        {
                res[i] = s1[i];
                i++;
        }
        while (s2[j])
        {
                res[i + j] = s2[j];
                j++;
        }
        res[i + j] = 0;
        return (res);
}
