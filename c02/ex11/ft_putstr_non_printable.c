/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:12:56 by mravera           #+#    #+#             */
/*   Updated: 2021/09/08 23:46:15 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char str)
{
	if (str >= 32 && str <= 126)
		return (1);
	else
		return (0);
}

void	print_hexa(unsigned char x)
{
	unsigned char	dixaine;
	unsigned char	unite;

	dixaine = x / 16;
	unite = x % 16;
	if (dixaine < 10)
		dixaine = '0' + dixaine;
	else
		dixaine = 'a' + (dixaine % 10);
	if (unite < 10)
		unite = '0' + unite;
	else
		unite = 'a' + (unite % 10);
	write(1, &dixaine, 1);
	write(1, &unite, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			print_hexa(str[i]);
		}
		i++;
	}
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	src[] = "Bonjour, voici des tests \n 0d:\r == 1b:\e == ff:\377 == b0:\260";
	//printf("[%s]", src);
	ft_putstr_non_printable(src);
	return (0);
}
*/
