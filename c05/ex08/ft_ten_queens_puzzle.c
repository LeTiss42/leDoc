/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:41:41 by mravera           #+#    #+#             */
/*   Updated: 2021/09/18 13:44:24 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	diag_up(char *pos, int i, int j)
{
	int	x;

	x = i;
	i--;
	if (i < 0)
		return (1);
	while (i >= 0)
	{
		if (pos[i] == '0' + (j - (i - x))
			|| pos[i] == '0' + (j + (i - x)))
			return (0);
		i--;
	}
	return (1);
}

int	is_free(char *pos, int i, int j)
{
	int	q;

	q = i - 1;
	if (q < 0)
		return (1);
	while (q >= 0)
		if (pos[q--] == '0' + j)
			return (0);
	if (!diag_up(pos, i, j))
		return (0);
	return (1);
}

void	place_queens(char *pos, int i, int *tot)
{
	int	j;

	j = 0;
	if (i == 10)
	{
		while (j <= 9)
		{
			write(1, &pos[j], 1);
			j++;
		}
		write(1, "\n", 1);
		*tot = *tot + 1;
		return ;
	}
	while (j <= 9)
	{
		if (is_free(pos, i, j) != 0)
		{
			pos[i] = '0' + j;
			place_queens(pos, i + 1, tot);
		}
		j++;
	}
	return ;
}

int	ft_ten_queens_puzzle(void)
{
	int		res;
	int		*tot;
	char	pos[10];

	tot = &res;
	res = 0;
	place_queens(pos, 0, tot);
	return (res);
}

int	main(void)
{
	int	res;

	res = ft_ten_queens_puzzle();
	return (0);
}

