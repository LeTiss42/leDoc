/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <@student.42lausanne.ch>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:45:56 by mravera           #+#    #+#             */
/*   Updated: 2021/09/23 15:15:27 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *str);
int				ft_checkbase(char *base);
int				ft_posbase(char c, char *base);
int				ft_isinstr(char c, char *str);
int				ft_atoi_base(char *str, char *base);

void	ft_putnbr_base(char *res, int nbr, char *base)
{
	unsigned int	dix;
	unsigned int	x;
	unsigned int	i;
	char			temp[34];

	dix = ft_strlen(base);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp_int;
	char	*res;

	if (!(ft_checkbase(base_from) && ft_checkbase(base_to)))
		return (NULL);
	temp_int = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(34 * sizeof(char));
	ft_putnbr_base(res, temp_int, base_to);
	return (res);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*res;
	char	*nbr;
	char	*base_from;
	char	*base_to;

	(void) argc;
	nbr = argv[1];
	base_from = argv[2];
	base_to = argv[3];
	res = ft_convert_base(nbr, base_from, base_to);
	printf("res = %s\n", res);
	free(res);
	return (0);
}

