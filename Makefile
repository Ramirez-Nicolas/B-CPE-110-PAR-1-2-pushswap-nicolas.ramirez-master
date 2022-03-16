##
## EPITECH PROJECT, 2020
## makefile
## File description:
## compile
##

SRCS	=	sources/swap_elem.c	\
		sources/bubble_sort.c	\

SRC_UT =	tests/test.c	\

NAME    = libmy.a

UT_NAME = tests_run

OBJS    = $(SRCS:.c=.o)

CRITERION = --coverage -lcriterion

CPPFLAGS = -I./includes

CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(SRCS) $(OBJS)

clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno
	rm -f $(UT_NAME)

re: fclean all

unit_tests:	fclean $(NAME)
	gcc -o $(UT_NAME) $(SRCS) $(SRC_UT) $(CRITERION)

tests_run: unit_tests
	./$(UT_NAME)
