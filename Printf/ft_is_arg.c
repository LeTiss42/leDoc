/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 11:20:18 by mathis            #+#    #+#             */
/*   Updated: 2022/03/04 12:32:50 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	is_arg(const char *obj, va_list lst)
{
	if (*obj == 'c')
		return (is_c(lst));
	else if (*obj == 's')
		return (is_s(lst));
	else if (*obj == 'p')
		return (is_p(lst));
	else if (*obj == 'd')
		return (is_d(lst));
	else if (*obj == 'i')
		return (is_i(lst));
	else if (*obj == 'u')
		return (is_u(lst));
	else if (*obj == 'x')
		return (is_x(lst));
	else if (*obj == 'X')
		return (is_majx(lst));
	else if (*obj == '%')
		return (is_pcent());
	else
		return (0);
}
