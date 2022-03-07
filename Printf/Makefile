# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathis <mathis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 19:28:02 by mathis            #+#    #+#              #
#    Updated: 2022/03/07 18:25:28 by mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
CC = gcc
NAME = libftprintf.a

SRC = ft_is_arg.c \
	  ft_is_c.c \
	  ft_is_s.c \
	  ft_is_p.c \
	  ft_is_d.c \
	  ft_is_i.c \
	  ft_is_u.c \
	  ft_is_x.c \
	  ft_is_majx.c \
	  ft_is_pcent.c \
	  ft_putnbr_base.c \
	  ft_putnbr_base_ui.c \
	  ft_putnbr_basev.c \
	  ft_strlen_unsigned.c \
	  ft_printf.c \
	  ft_calloc.c \


OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror
RM = rm -f

#premiere commande qui va debuter toutes les autres
all : $(NAME)

#commande generique pour transformer tous les .c en .o
#%.o : %.c
#	$(CC) -o $@ -c $<

#commande de creation de la bibliotheque finale
$(NAME) : $(OBJ)
	ar rcs $@ $^

clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
