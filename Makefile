

SRCS			=	ft_big_Sort.c \
					ft_big_little.c \
					ft_check_empty.c \
 					ft_dup.c \
					ft_instructions.c \
					ft_instructions2.c \
					ft_norminette_1.c \
					ft_push_back.c \
					ft_push_to_stack.c \
					ft_simple_sort.c \
					ft_smallest_index.c \
					ft_split.c \
					ft_stack.c \
					ft_utils.c \
					push_swap.c \
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= push_swap.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus