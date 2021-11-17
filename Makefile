# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kessalih <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 08:24:36 by kessalih          #+#    #+#              #
#    Updated: 2021/11/15 15:50:20 by kessalih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		 ft_isprint.c ft_isascii.c ft_itoa.c ft_tolower.c ft_toupper.c \
		 ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		 ft_split.c ft_strtrim.c ft_substr.c ft_strmapi.c ft_striteri.c \
		 ft_strchr.c ft_strrchr.c ft_strdup.c ft_strjoin.c ft_strlen.c \
		 ft_strnstr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c
CFILES_B = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
		   ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		   ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OFILES = $(CFILES:.c=.o)
OFILES_B = $(CFILES_B:.c=.o)
CC = gcc
FLAGS = -Wall -Werror -Wextra
HEADER = libft.h
AR = ar rcs
RM = rm -rf
NAME = libft.a

%.o : %.c
	$(CC) $(FLAGS) $< -c $(HEADER)
	$(AR) $(NAME) $@

$(NAME) : $(OFILES)

bonus : $(OFILES_B)

all : $(NAME)

clean :
	$(RM) $(OFILES) $(OFILES_B)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all re bonus clean fclean
