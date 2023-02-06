
NAME = libftprintf.a
SRCS =ft_printf.c\
ft_putchar.c\
ft_putnbr.c\
ft_putstr.c\
ft_putunsg.c\
ft_puthexupper.c\
ft_puthexlower.c\
ft_putadr.c\


OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra
CC = gcc
RM = rm -f
AR = ar rc

all: $(NAME)

$(NAME):$(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(B_OBJS)

fclean:clean
	$(RM) $(NAME)
re:fclean all