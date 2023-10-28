# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iwozniak <iwozniak@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 13:21:57 by iwozniak          #+#    #+#              #
#    Updated: 2023/10/18 12:45:54 by iwozniak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#	C FILES                                                                    #
# **************************************************************************** #

CFILES_CHECK = \
			ft_isalnum \
			ft_isalpha \
			ft_isascii \
			ft_isdigit \
			ft_isprint

CFILES_GNL = get_next_line \
			get_next_line_utils

CFILES_LIST = \
			ft_lstadd_back \
			ft_lstadd_front \
			ft_lstclear \
			ft_lstdelone \
			ft_lstiter \
			ft_lstlast \
			ft_lstmap \
			ft_lstnew \
			ft_lstsize

CFILES_MEMORY = \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_memchr \
			ft_memcmp \
			ft_calloc

CFILES_PRINT = \
			ft_base_nbrlen \
			ft_putchar \
			ft_putnbr \
			ft_putstr \
			ft_u_base_nbrlen \
			ft_u_base_putnbr \
			ft_u_puthexa \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \

CFILES_PRINTF = ft_printf \
			ft_printf_utils \
			ft_putnbr_pf \
			ft_base_nbrlen_pf \
			ft_u_base_nbrlen_pf \
			ft_u_base_putnbr_pf \
			ft_u_puthexa_pf \

CFILES_STRING = \
			ft_atoi \
			ft_itoa \
			ft_split \
			ft_strchr \
			ft_strcpy \
			ft_strdup \
			ft_strjoin \
			ft_strlen \
			ft_strncmp \
			ft_substr \
			ft_strrchr \
			ft_strnstr \
			ft_strlcpy \
			ft_strlcat \
			ft_strtrim \
			ft_strmapi \
			ft_striteri \
			ft_toupper \
			ft_tolower

# **************************************************************************** #
#	SOURCES                                                                    #
# **************************************************************************** #

SRCS_DIR = ./srcs/
SRCS_DIR_CHECK = $(SRCS_DIR)check/
SRCS_DIR_PRINT = $(SRCS_DIR)print/
SRCS_DIR_PRINTF = $(SRCS_DIR)printf/
SRCS_DIR_GNL = $(SRCS_DIR)gnl/
SRCS_DIR_STRING = $(SRCS_DIR)str/
SRCS_DIR_LIST = $(SRCS_DIR)lst/
SRCS_DIR_MEMORY = $(SRCS_DIR)memory/

SRCS_CHECK = $(addprefix $(SRCS_DIR_CHECK), $(addsuffix .c, $(CFILES_CHECK)))
SRCS_PRINT = $(addprefix $(SRCS_DIR_PRINT), $(addsuffix .c, $(CFILES_PRINT)))
SRCS_PRINTF = $(addprefix $(SRCS_DIR_PRINTF), $(addsuffix .c, $(CFILES_PRINTF)))
SRCS_GNL = $(addprefix $(SRCS_DIR_GNL), $(addsuffix .c, $(CFILES_GNL)))
SRCS_STRING = $(addprefix $(SRCS_DIR_STRING), $(addsuffix .c, $(CFILES_STRING)))
SRCS_LIST = $(addprefix $(SRCS_DIR_LIST), $(addsuffix .c, $(CFILES_LIST)))
SRCS_MEMORY = $(addprefix $(SRCS_DIR_MEMORY), $(addsuffix .c, $(CFILES_MEMORY)))

# **************************************************************************** #
#	OBJECTS                                                                    #
# **************************************************************************** #

OBJS_CHECK = $(SRCS_CHECK:.c=.o)
OBJS_PRINT = $(SRCS_PRINT:.c=.o)
OBJS_PRINTF = $(SRCS_PRINTF:.c=.o)
OBJS_GNL =  $(SRCS_GNL:.c=.o)
OBJS_STRING =  $(SRCS_STRING:.c=.o)
OBJS_LIST = $(SRCS_LIST:.c=.o)
OBJS_MEMORY = $(SRCS_MEMORY:.c=.o)

# **************************************************************************** #
#	HEADERS                                                                    #
# **************************************************************************** #

HDR_NAMES = libft.h
HDR_FOLDER = ./includes/
HDRS = $(addprefix $(HDR_FOLDER), $(HDR_NAMES))
HDR_INC = $(addprefix -I, $(HDR_FOLDER))

# **************************************************************************** #
#	VARIABLES                                                                  #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# **************************************************************************** #
#	TARGETS                                                                    #
# **************************************************************************** #

$(NAME): $(OBJS_CHECK) $(OBJS_PRINT) $(OBJS_PRINTF) $(OBJS_GNL) $(OBJS_STRING) $(OBJS_LIST) $(OBJS_MEMORY) $(HDRS)
	$(AR) $@ $^

$(OBJS_CHECK):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_PRINT):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_PRINTF):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_GNL):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_STRING):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_LIST):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

$(OBJS_MEMORY):%.o: %.c $(HDRS)
	$(CC) $(CFLAGS) -c $(HDR_INC) -o $@ $<

all: $(NAME) $(HDRS)

clean:
	$(RM) $(OBJS_CHECK) $(OBJS_PRINT) $(OBJS_PRINTF) $(OBJS_GNL) $(OBJS_STRING) $(OBJS_LIST) $(OBJS_MEMORY)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
