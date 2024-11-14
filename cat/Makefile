##
## EPITECH PROJECT, 2022
## task02 Makefile
## File description:
## This will help compile code for task 02
##

SRC	=	main.c	\
		cat.c
# this will do the first step of compilation automatically
OBJ	=	$(SRC:.c=.o)
# this will only be used in the first step of compilation
CFLAGS	=	-I ../include

CRITERION	=	../tests/task02_test.c

NAME	=	cat

INSERT_LIB	=	-L../lib/ -lmy

UNIT_TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME):	
	gcc -o $(NAME) $(SRC) -L../lib/my -lmy $(CFLAGS) 
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(UNIT_TEST_NAME)

re:	fclean all

compile_test:
		gcc -o $(UNIT_TEST_NAME) cat.c $(CRITERION)\
		$(INSERT_LIB) $(CFLAGS) --coverage -lcriterion

tests_run:	fclean compile_test
