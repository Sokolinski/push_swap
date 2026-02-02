CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -fr

SRC = ft_itoa.c \
ft_print_char.c \
ft_print_number.c \
ft_print_string.c\
ft_ptint_hex.c \
ft_print_ptr.c\
ft_print_unsigned.c\
ft_print_precent.c\
ft_printf.c

OSRC = $(SRC:.c=.o)
TARGET = libftprintf.a

all: $(TARGET)

$(TARGET): $(OSRC)
		$(AR) $(TARGET) $(OSRC)

clean:
		rm -f $(OSRC)

fclean: clean
		rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re