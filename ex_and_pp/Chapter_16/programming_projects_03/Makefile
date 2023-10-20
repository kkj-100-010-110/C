NAME	=	inventory
CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -pedantic
RM		=	rm -rf
SRCS	=	inventory.c	\
			readline.c
OBJS	=	$(SRCS:%.c=%.o)
all		:	$(NAME)
%.o		: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean	:
	$(RM) $(OBJS)
fclean	:	clean
	$(RM) $(NAME)
re		:	fclean all
.PHONY	:	all clean fclean re
