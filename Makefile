NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c print_adr.c print_chr.c \
print_hex.c print_nbr.c print_str.c \
print_unbr.c

#BONUS_SRC = 

OBJ = $(SRC:.c=.o)
#BONUS_OBJ = $(BONUS_SRC:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#bonus: $(OBJ) $(BONUS_OBJ)
#	ar rcs $(NAME) $(BONUS_OBJ)

all: $(NAME) bonus

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean