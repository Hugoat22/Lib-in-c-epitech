##
## EPITECH PROJECT, 2025
## My lib
## File description:
## Make lib
##

SRC = 	my_print_comb2.c 	\
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