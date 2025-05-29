##
## EPITECH PROJECT, 2025
## My lib
## File description:
## Make lib
##

SRC = 	my_sort_int_array.c \
		my_getnbr.c 		\
		my_swap_char.c 		\
		my_evil_str.c 		\
		my_strlen.c 		\
		my_putstr.c			\
		my_swap.c 			\
		my_print_combn.c 	\
		my_power.c 			\
		my_put_nbr.c 		\
		my_print_comb2.c 	\
		my_print_comb.c		\
		my_print_digits.c   \
		my_print_revalpha.c	\
		my_putchar.c      	\
	  	my_print_alpha.c

OBJ = $(SRC:.c=.o)

NAMELIB = libmy.a

NAMEINC = my.h

all: $(NAMELIB)

$(NAMELIB) : $(OBJ)
	gcc -c $(OBJ)
	ar rc $(NAMELIB) $(OBJ)
	cp $(NAMELIB) ../$(NAMELIB)
	cp $(NAMEINC) ../../include/$(NAMEINC)
	make clean

clean:
	rm -f *.o