CC		=	gcc -g3

NAME		=	not_mg

SRC		=	function_prin.c \
			readline.c \
			direction.c \
			map.c \
			main.c

OBJS		=	$(SRC:.c=.o)

LIB		=	-L . -lmy

CFLAGS		=	-Wall -Werror -Wextra

RM		=	rm -rf

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LIB)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	fclean all re
