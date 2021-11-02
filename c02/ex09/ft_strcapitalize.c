/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 10:00:27 by mravera           #+#    #+#             */
/*   Updated: 2021/09/08 19:26:43 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	if (str >= 'A' && str <= 'Z')
		return (1);
	if (str >= '0' && str <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (j == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			j++;
		}
		else if (j == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (!(is_alphanum(str[i])))
			j = 0;
		else
			j = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char tab[] = "Vl1bxa0xpl2+XJH3SzG*<Q@CnWe<";
	printf("[%s]\n", tab);
	printf("[%s]\n", ft_strcapitalize(tab));
	return (0);
}
*/
