##
## EPITECH PROJECT, 2025
## My lib
## File description:
## Make lib
##

SRC = 	my_strncpy.c 				\
		my_strcpy.c 				\
		my_find_prime_sup.c 		\
		my_is_prime.c 				\
		my_compute_square_root.c 	\
		my_compute_power_rec.c 		\
		my_compute_power_it.c 		\
		my_compute_factorial_rec.c 	\
		my_compute_factorial_it.c 	\
		my_sort_int_array.c 		\
		my_getnbr.c 				\
		my_swap_char.c 				\
		my_evil_str.c 				\
		my_strlen.c 				\
		my_putstr.c					\
		my_swap.c 					\
		my_print_combn.c 			\
		my_power.c					\
		my_put_nbr.c 				\
		my_print_comb2.c 			\
		my_print_comb.c				\
		my_print_digits.c   		\
		my_print_revalpha.c			\
		my_putchar.c      			\
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