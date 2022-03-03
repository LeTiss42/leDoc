/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathis <mathis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:05:47 by mathis            #+#    #+#             */
/*   Updated: 2022/03/03 20:08:06 by mathis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
#include <stdarg.h>
//#include <stdint.h> //pour utiliser uint64_t a la place de unsigned long long

void			ft_putnbr_base(char *res, int nbr, char *base);
void			ft_putnbr_base_unsigned_int(char *res, unsigned int nbr, char *base);
void			ft_putnbr_base_void(char *res, unsigned long long nbr, char *base);
unsigned int	ft_strlen_Unsigned(char *str);

int	is_c(va_list lst)
{
	int	x;

	x = va_arg(lst, const int);
	return (write(1, &x, 1));
}

int	is_s(va_list lst)
{
	char const	*x;
	size_t		i;

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
	void	*x;
	size_t	i;
	char	*res;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, void *);
	ft_putnbr_base_void(res, (unsigned long long) x, "0123456789abcdef");
	write(1, "0", 1);
	write(1, "x", 1);
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i + 2);
}

int	is_d(va_list lst)
{
	int		x;
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, const int);
	ft_putnbr_base(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}

int	is_i(va_list lst)
{
	int		x;
	char	*res;
	size_t	i;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, const int);
	ft_putnbr_base(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}

int	is_u(va_list lst)
{
	unsigned int	x;
	char			*res;
	size_t			i;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, const unsigned int);
	ft_putnbr_base_unsigned_int(res, x, "0123456789");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}

int	is_x(va_list lst)
{
	unsigned int	x;
	size_t			i;
	char			*res;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, unsigned int);
	ft_putnbr_base_unsigned_int(res, x, "0123456789abcdef");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}

int	is_majx(va_list lst)
{
	unsigned int	x;
	size_t			i;
	char			*res;

	i = 0;
	res = (char *)malloc(34 * sizeof(char));
	x = va_arg(lst, unsigned int);
	ft_putnbr_base_unsigned_int(res, x, "0123456789ABCDEF");
	while (res[i])
	{
		write(1, &res[i], 1);
		i++;
	}
	return (i);
}

int	is_pcent(va_list lst)
{
	return (write(1, "%", 1));
}

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
		return (is_pcent(lst));
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
	int		test;
	void	*ptr;

	test = -10;
	(void) argc;
	printf(" || test->nbr ==> [%i]", printf("1  test ==> [%c]", '*'));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("1  mien ==> [%c]", '*'));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("2  test ==> [%s]", "testducu"));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("2  mien ==> [%s]", "testducu"));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("3  test ==> [%p]", &ptr));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("3  mien ==> [%p]", &ptr));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("4  test ==> [%d]", 0));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("4  mien ==> [%d]", 0));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("5  test ==> [%i]", -11));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("5  mien ==> [%i]", -11));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("6  test ==> [%u]", 0));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("6  mien ==> [%u]", 0));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("7  test ==> [%x]", &ptr));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("7  mien ==> [%x]", &ptr));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("8  test ==> [%X]", &ptr));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("8  mien ==> [%X]", &ptr));
	printf("\n\n");

	printf(" || test->nbr ==> [%i]", printf("9  test ==> [%%]"));
	printf("\n");
	printf(" || mien->nbr ==> [%i]", ft_printf("9  mien ==> [%%]"));
	printf("\n");
	return (0);
}

void	ft_putnbr_base(char *res, int nbr, char *base)
{
	unsigned int	dix;
	unsigned int	x;
	unsigned int	i;
	char			temp[34];

	dix = ft_strlen_Unsigned(base);
	i = 0;
	if (nbr < 0)
		x = -nbr;
	if (nbr == 0)
		res[0] = base[0];
	if (nbr == 0)
		return ;
	if (nbr > 0)
		x = nbr;
	while (x > 0)
	{
		temp[i++] = base[x % dix];
		x = x / dix;
	}
	if (nbr < 0)
		temp[i++] = '-';
	while (i-- > 0)
		res[x++] = temp[i];
}

void	ft_putnbr_base_unsigned_int(char *res, unsigned int nbr, char *base)
{
	unsigned int	dix;
	unsigned int	x;
	unsigned int	i;
	char			temp[34];

	dix = ft_strlen_Unsigned(base);
	i = 0;
	if (nbr < 0)
		x = -nbr;
	if (nbr == 0)
		res[0] = base[0];
	if (nbr == 0)
		return ;
	if (nbr > 0)
		x = nbr;
	while (x > 0)
	{
		temp[i++] = base[x % dix];
		x = x / dix;
	}
	if (nbr < 0)
		temp[i++] = '-';
	while (i-- > 0)
		res[x++] = temp[i];
}

void	ft_putnbr_base_void(char *res, unsigned long long nbr, char *base)
{
	unsigned long long	dix;
	unsigned long long	x;
	unsigned long long	i;
	char		temp[34];

	dix = ft_strlen_Unsigned(base);
	i = 0;
	if (nbr == 0)
		res[0] = base[0];
	if (nbr == 0)
		return ;
	if (nbr > 0)
		x = nbr;
	while (x > 0)
	{
		temp[i++] = base[x % dix];
		x = x / dix;
	}
	while (i-- > 0)
		res[x++] = temp[i];
}

unsigned int	ft_strlen_Unsigned(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
