# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rperesve <rperesve@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 10:15:39 by rperesve          #+#    #+#              #
#    Updated: 2025/10/30 13:57:16 by rperesve         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# file name
NAME = libft.a

# mandatory part
MANPART1 = ft_atoi.c # !!! ADD REMAINING !!!

# source files combined
SRC = ${MANPART1}

# object files combined
OBJS = ${SRC:.c=.o}

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

# builds all the necessary files in the directory
all: ${NAME}

# removes the object files
clean:
	${RM} ${OBJS}

# removes the object files and the output files
fclean: clean
	${RM} ${NAME}

# rebuilds the program
re: fclean all

test: all
	$(CC) $(CFLAGS) test.c -L. -lft -o test && ./test

# declares all the targets
.PHONY: all clean fclean re
