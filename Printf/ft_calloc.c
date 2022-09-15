/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:13:54 by mathis            #+#    #+#             */
/*   Updated: 2022/03/07 18:23:19 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot;
	void	*res;
	size_t	i;

	i = 0;
	tot = count * size;
	res = malloc(tot);
	if (res == 0)
		return (0);
	if (tot > 2147483647)
		return (0);
	while (i < tot)
		((char *)res)[i++] = 0;
	return (res);
}
