# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 19:28:02 by mathis            #+#    #+#              #
#    Updated: 2021/11/19 17:24:53 by mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
CC = gcc                          #nom du compilateur
NAME = libft.a                    #nom
SRC = $(wildcard *.c)             #liste de tout les fichiers .c
OBJ = $(SRC:.c=.o)                #liste de tout les fichiers .o a partir des .c
CFLAGS = -Wall -Wextra -Werror    #liste de flags a utiliser par defaut
RM = rm -f                        #commande pour supprimer sans message d'erreur

#premiere commande qui va debuter toutes les autres
all : $(NAME)

#commande generique pour transformer tous les .c en .o
#%.o : %.c
#	$(CC) -o $@ -c $<

#commande de creation de la bibliotheque finale
$(NAME) : $(OBJ)
	ar rcs $@ $^

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
