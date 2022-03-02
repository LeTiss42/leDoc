/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:05:47 by mathis            #+#    #+#             */
/*   Updated: 2022/03/02 10:56:50 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdarg.h>

int	is_c(va_list lst)
{
	int	x;

	x = va_arg(lst, const int);
	return (write(1, &x, 1));
}

int	is_s(va_list lst)
{
	char const	*x;
	size_t	i;

	i = 0;
	x = va_arg(lst, const char *);
	if (x == NULL)
		x = "[errNULL]";
	while (x[i])
	{
		write(1, &x[i], 1);
		i++;
	}
	return (i);
}

int	is_p(va_list lst)
{
	const void	*x;
	size_t		i;

	i = 0;
	x = va_arg(lst, const void *);
	printf("[x = %p] -> ", x);
	i += write(1, &x, 1);
	return (i);
}

int	is_arg(const char *obj, va_list lst)
{
	if (*obj == 'c')
		return (is_c(lst));
	else if (*obj == 's')
		return (is_s(lst));
	else if (*obj == 'p')
		return (is_p(lst));
/*	else if (*obj == 'd')
		return (is_d(va_arg(lst, const char *)));
	else if (*obj == 'i')
		return (is_i(va_arg(lst, const char *)));
	else if (*obj == 'u')
		return (is_u(va_arg(lst, const char *)));
	else if (*obj == 'x')
		return (is_x(va_arg(lst, const char *)));
	else if (*obj == 'X')
		return (is_majx(va_arg(lst, const char *)));
	else if (*obj == '%')
		return (is_pcent(va_arg(lst, const char *))); */
	else
		return (0);
}

int	ft_printf(const char *obj, ...)
{
	va_list	lst;
	int		count;

	va_start(lst, obj);
	count = 0;
	while (*obj)
	{
		if (*obj == '%')
		{
			obj++;
			count = count + is_arg(obj, lst);
		}
		else
		{
			write(1, obj, 1);
			count++;
		}
		obj++;
	}
	va_end(lst);
	return (count);
}

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	test;
	int	*ptr;

	test = 42;
	ptr = &test;
	(void) argc;
	printf(" || test->nbr ==> [%i]", printf("test ==> [%p]", &test));
	printf("%c", '\n');
	printf(" || test->nbr ==> [%i]", printf("test ==> [%p]", ptr));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("mien ==> [%p]", &test));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("mien ==> [%p]", ptr));
	printf("\n");
	return (0);
}
