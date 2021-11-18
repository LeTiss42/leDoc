# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/18 19:28:02 by mathis            #+#    #+#              #
#    Updated: 2021/11/18 20:49:23 by mathis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
CC = gcc               #nom du compilateur
EXEC = libft.a         #nom de l'executable
SRC = $(wildcard *.c)  #liste de tout les fichiers .c
OBJ = $(SRC:.c=.o)     #liste de tout les fichiers .o a partir des .c

#premiere commande qui va debuter toutes les autres
all : $(EXEC)

#commande generique pour transformer tous les .c en .o
%.o : %.c
	$(CC) -o $@ -c $<

#commande de creation de la bibliotheque finale
$(EXEC) : $(OBJ)
	ar rcs $(EXEC) $^
