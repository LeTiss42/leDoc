/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 14:05:17 by mravera           #+#    #+#             */
/*   Updated: 2021/09/07 17:07:27 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	src[] = "Hello Philou";
	char	src2[0];
	char	dest[]= "01234567890123456789";
	char	dest2[] = "01234567890123456789";

	printf("%i\n", ft_str_is_alpha(src));
	printf("%i\n", ft_str_is_alpha(src2));
	printf("%i\n", ft_str_is_alpha(dest));
	return (0);
}
*/
