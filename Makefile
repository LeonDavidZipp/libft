# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lzipp <lzipp@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 19:14:44 by lzipp             #+#    #+#              #
#    Updated: 2024/04/10 17:21:13 by lzipp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wextra -Wall -Werror

SOURCES = $(addprefix src/, \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_count_char.c \
ft_fprintf.c \
ft_free_null_term_arrs.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_itoa.c \
ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstclear_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstlast_bonus.c \
ft_lstmap_bonus.c \
ft_lstnew_bonus.c \
ft_lstreverse.c \
ft_lstsize_bonus.c \
ft_max_min.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_null_terminated_arr_len.c \
ft_numlens.c \
ft_numtoa.c \
ft_power.c \
ft_printf.c \
ft_putchar_fd.c \
ft_putchars_int.c \
ft_puthexes_int.c \
ft_puthexes_int_fd.c \
ft_putnbr_fd.c \
ft_putnbrs_int.c \
ft_putendl_fd.c \
ft_putstr_fd.c \
ft_recalloc.c \
ft_safe_free.c \
ft_split.c \
ft_sprintf.c \
ft_str_includes_only.c \
ft_strchr.c \
ft_strcmp.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strrncmp.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
get_next_line.c \
get_next_line_no_nl.c)

OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS) $(BONUS_OBJECTS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re
