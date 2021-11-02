/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:23:31 by mravera           #+#    #+#             */
/*   Updated: 2021/09/20 17:25:40 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return ((unsigned char) *s1 - (unsigned char) *s2);
		else if (*s1 == *s2)
		{
			s2++;
			s1++;
		}
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_sort_int_tab(char **tab, int size)
{
	char	*temp;
	int		i;
	int		j;

	if (size <= 1)
		return ;
	i = 1;
	while (i < size - 1)
	{
		j = i + 1;
		while (tab[j])
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	ft_sort_int_tab(argv, argc);
	while (argv[i] != 0)
	{
		j = 0;
		while (argv[i][j] != 0)
			write(1, &argv[i][j++], 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
