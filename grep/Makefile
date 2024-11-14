##
## EPITECH PROJECT, 2022
## task02 Makefile
## File description:
## This will help compile code for task 02
##

SRC	=	main.c	\
		grep.c
# this will do the first step of compilation automatically
OBJ	=	$(SRC:.c=.o)
# this will only be used in the first step of compilation
CFLAGS	=	-I ../include

CRITERION	=	../tests/task04_test.c

NAME	=	grep

INSERT_LIB	=	-L../lib/my -lmy

UNIT_TEST_NAME	=	unit_tests

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(INSERT_LIB)
clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f $(UNIT_TEST_NAME)

re:	fclean all

compile_test:
		gcc -o $(UNIT_TEST_NAME) grep.c $(CRITERION)\
		$(INSERT_LIB) $(CFLAGS) --coverage -lcriterion

tests_run:	fclean compile_test
