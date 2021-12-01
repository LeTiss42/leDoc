/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:23:48 by mathis            #+#    #+#             */
/*   Updated: 2021/12/01 18:24:35 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
        size_t  tot;
        void    *res;
        size_t  i;

        i = 0;
        tot = nmemb * size;
        res = malloc(tot);
        if (res == 0 || nmemb == 0 || size ==0)
                return (0);
        if (tot > 2147483647)
                return (0);
        while (i < tot)
                ((char *)res)[i++] = 0;
        return (res);
}
