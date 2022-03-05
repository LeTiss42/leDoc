/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mravera <mravera@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 13:46:30 by mravera           #+#    #+#             */
/*   Updated: 2022/03/05 14:26:10 by mravera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(const char *obj, ...);

void			ft_putnbr_base(char *res, int nbr, char *base);
void			ft_putnbr_base_ui(char *res, unsigned int nbr, char *base);
void			ft_putnbr_basev(char *res, unsigned long long nbr, char *base);
unsigned int	ft_strlen_unsigned(char *str);

int				is_arg(const char *obj, va_list lst);
int				is_c(va_list lst);
int				is_s(va_list lst);
int				is_p(va_list lst);
int				is_d(va_list lst);
int				is_i(va_list lst);
int				is_u(va_list lst);
int				is_x(va_list lst);
int				is_majx(va_list lst);
int				is_pcent(void);

#endif
