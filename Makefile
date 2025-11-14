# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 10:15:39 by rperesve          #+#    #+#              #
#    Updated: 2025/11/14 22:06:59 by rperesve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# output file name
NAME = libft.a

# mandatory part 1 files
MANPART1 = ft_strlen.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcpy.c \
		ft_strlcat.c ft_memmove.c ft_strchr.c ft_strncmp.c ft_strrchr.c \
		ft_tolower.c ft_toupper.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c

# mandatory part 2 files
MANPART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c

# bonus files
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# all source files combined
SRC = ${MANPART1} ${MANPART2}

# all object files combined
OBJS = ${SRC:.c=.o}

# bonus objects
BONUS_OBJS = ${BONUS:.c=.o}

# compiler conditions
CC = cc
RM = rm -f # force removal
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I . # include the flags

# compiles .c files to .o files and includes header files but stops before linking
.o:.c
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:-c=.o}

# compiles object files into the libft.a library
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

# run the previous command
all: ${NAME}

# compiles bonus files
bonus: ${OBJS} ${BONUS_OBJS}
	ar rcs ${NAME} ${OBJS} ${BONUS_OBJS}

# removes the object files
clean:
	${RM} ${OBJS} ${BONUS_OBJS}

# removes the object files and the output files
fclean: clean
	${RM} ${NAME}

# rebuilds the program
re: fclean all

test: all
	$(CC) $(CFLAGS) test.c -L. -lft -o test && ./test

# declares all the targets
.PHONY: all clean fclean re
