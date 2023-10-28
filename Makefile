# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwozniak <iwozniak@student.42abudhabi.ae>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 14:32:14 by iwozniak          #+#    #+#              #
#    Updated: 2023/10/27 18:26:52 by iwozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#	C FILES                                                                    #
# **************************************************************************** #

CFILES = push_swap \

CFILES_CLEAN = clean \

CFILES_OPERATIONS = push \
					reverse \
					rotate \
					swap

CFILES_SORT = move_a_top \
			move_both_top \
			move_min_top \
			set_cheapest \
			set_targets \
			sort_small \
			sort \

CFILES_STACK = find_min_max \
			indexes \
			init_data \
			init_stack

CFILES_UTILS = utils \

CFILES_VALIDATION = checks \
					validation

# **************************************************************************** #
#	SOURCES                                                                    #
# **************************************************************************** #

SRCS_DIR = ./srcs/
SRCS_DIR_CLEAN = $(SRCS_DIR)clean/
SRCS_DIR_OPERATIONS = $(SRCS_DIR)operations/
SRCS_DIR_SORT = $(SRCS_DIR)sort/
SRCS_DIR_STACK = $(SRCS_DIR)stack/
SRCS_DIR_UTILS = $(SRCS_DIR)utils/
SRCS_DIR_VALIDATION= $(SRCS_DIR)validation/

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(CFILES)))
SRCS_CLEAN = $(addprefix $(SRCS_DIR_CLEAN), $(addsuffix .c, $(CFILES_CLEAN)))
SRCS_OPERATIONS = $(addprefix $(SRCS_DIR_OPERATIONS), $(addsuffix .c, $(CFILES_OPERATIONS)))
SRCS_SORT = $(addprefix $(SRCS_DIR_SORT), $(addsuffix .c, $(CFILES_SORT)))
SRCS_STACK = $(addprefix $(SRCS_DIR_STACK), $(addsuffix .c, $(CFILES_STACK)))
SRCS_UTILS = $(addprefix $(SRCS_DIR_UTILS), $(addsuffix .c, $(CFILES_UTILS)))
SRCS_VALIDATION = $(addprefix $(SRCS_DIR_VALIDATION), $(addsuffix .c, $(CFILES_VALIDATION)))

# **************************************************************************** #
#	OBJECTS                                                                    #
# **************************************************************************** #

OBJS = $(SRCS:.c=.o)
OBJS_CLEAN = $(SRCS_CLEAN:.c=.o)
OBJS_OPERATIONS = $(SRCS_OPERATIONS:.c=.o)
OBJS_SORT = $(SRCS_SORT:.c=.o)
OBJS_STACK = $(SRCS_STACK:.c=.o)
OBJS_UTILS = $(SRCS_UTILS:.c=.o)
OBJS_VALIDATION = $(SRCS_VALIDATION:.c=.o)

# **************************************************************************** #
#	HEADERS                                                                    #
# **************************************************************************** #

HDR_NAMES = push_swap.h
HDR_FOLDER = ./includes/
HDRS = $(addprefix $(HDR_FOLDER), $(HDR_NAMES))
HDR_INC = $(addprefix -I, $(HDR_FOLDER))

# **************************************************************************** #
#	VARIABLES                                                                  #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# **************************************************************************** #
#	LIBFT                                                                      #
# **************************************************************************** #

LIBFT_DIR = ./libft
LIBFT_AR = $(LIBFT_DIR)/libft.a

# **************************************************************************** #
#	TARGETS                                                                    #
# **************************************************************************** #

all: $(NAME) $(HDRS) $(LIBFT_AR)

$(OBJS): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_CLEAN): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_OPERATIONS): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_SORT): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_STACK): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_UTILS): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(OBJS_VALIDATION): %.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) $< -o $@

$(NAME): $(OBJS) $(OBJS_CLEAN) $(OBJS_OPERATIONS) $(OBJS_SORT) $(OBJS_STACK) $(OBJS_UTILS) $(OBJS_VALIDATION) $(HDRS) $(LIBFT_AR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJS_CLEAN) $(OBJS_OPERATIONS) $(OBJS_SORT) $(OBJS_STACK) $(OBJS_UTILS) $(OBJS_VALIDATION) $(LIBFT_AR)

$(LIBFT_AR):
	@make -C $(LIBFT_DIR)

clean:
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS) $(OBJS_CLEAN) $(OBJS_OPERATIONS) $(OBJS_SORT) $(OBJS_STACK) $(OBJS_UTILS) $(OBJS_VALIDATION)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
