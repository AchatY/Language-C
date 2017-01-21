
CC			=	gcc
NAME			=	libmy.a
SRC			=	my_putchar.o \
				my_isneg.o \
				my_put_nbr.o \
				my_swap.o \
				my_putstr.o \
				my_strlen.o \
				my_getnbr.o \
				my_strcpy.o \
				my_strncpy.o \
				my_strcmp.o \
				my_strncmp.o \
				my_strcat.o\
				my_strncat.o \
				my_strstr.o \
				my_str_to_wordtab.o \
				my_strdup.o
CFLAGS			=	-Wall -Werror
RM			=	rm -rf
all			:	$(SRC)
				ar r libmy.a *.o
				ranlib libmy.a
my_putchar.o		:	my_putchar.c
				$(CC) -c my_putchar.c $(CFLAGS)
my_isneg.o		:	my_isneg.c
				$(CC) -c my_isneg.c $(CFLAGS)
my_put_nbr.o		:	my_put_nbr.c
				$(CC) -c my_put_nbr.c $(CFLAGS)
my_swap.o		:	my_swap.c
				$(CC) -c my_swap.c $(CFLAGS)
my_putstr.o		:	my_putstr.c
				$(CC) -c my_putstr.c $(CFLAGS)
my_strlen.o		:	my_strlen.c
				$(CC) -c my_strlen.c $(CFLAGS)
my_getnbr.o		:	my_getnbr.c
				$(CC) -c my_getnbr.c $(CFLAGS)
my_strcpy.o		:	my_strcpy.c
				$(CC) -c my_strcpy.c $(CFLAGS)
my_strncpy.o		:	my_strncpy.c
				$(CC) -c my_strncpy.c $(CFLAGS)
my_strcmp.o		:	my_strcmp.c
				$(CC) -c my_strcmp.c $(CFLAGS)
my_strncmp.o		:	my_strncmp.c
				$(CC) -c my_strncmp.c $(CFLAGS)
my_strcat.o		:	my_strcat.c
				$(CC) -c my_strcat.c $(CFLAGS)
my_strncat.o		:	my_strncat.c
				$(CC) -c my_strncat.c $(CFLAGS)
my_strstr.o		:	my_strstr.c
				$(CC) -c my_strstr.c $(CFLAGS)
my_strdup.o		:	my_strdup.c
				$(CC) -c my_strdup.c $(CFLAGS)
my_str_to_wordtab.o	:	my_str_to_wordtab.c
				$(CC) -c my_str_to_wordtab.c $(CFLAGS)
.PHONY			:	clean

clean			:
				$(RM) $(SRC)

fclean			:	clean
				$(RM) $(NAME)
re			:	fclean all
