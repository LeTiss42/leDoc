/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:18:41 by mravera           #+#    #+#             */
/*   Updated: 2021/09/22 17:28:18 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_tot(int size, char **strs, char *sep)
{
	unsigned int	totsize;
	unsigned int	i;
	unsigned int	j;

	totsize = 0;
	i = 0;
	while (i < (unsigned int)size)
	{
		j = 0;
		while (strs[i][j++])
			totsize++;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	totsize += (i * (size - 1));
	return (totsize + 1);
}

void	ft_res(int size, char **strs, char *sep, char *res)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	x = 0;
	i = 0;
	while (i < (unsigned int)size)
	{
		j = 0;
		while (strs[i][j])
			res[x++] = strs[i][j++];
		i++;
		if (i < (unsigned int)size)
		{
			j = 0;
			while (sep[j])
				res[x++] = sep[j++];
		}
	}
	res[x] = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	totsize;
	char			*res;

	if (size == 0)
	{
		res = (char *)malloc(sizeof(char));
		*res = '\0';
		return (res);
	}
	totsize = ft_tot(size, strs, sep);
	res = (char *)malloc(totsize * sizeof(char));
	ft_res(size, strs, sep, res);
	return (res);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*strs[] = {"ouiksjs", "nodnd", "556peu", "etdfgdr"};
	char	*sep;
	int		taille;
	char	*resultat;
	int		i;

	(void) argv;
	(void) argc;
	i = 0;
	sep = " jean ";
	resultat = ft_strjoin(0, strs, sep);
	taille = 0;
	while (resultat[i++])
		taille++;
	printf("res = %s\nde taille = %d\n", resultat, taille);
	return (0);
}
*/
