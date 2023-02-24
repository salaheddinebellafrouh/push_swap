NAME			= push_swap


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
					ft_chunks.c \
					
OBJS			= $(SRCS:.c=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				gcc -Wall -Wextra -Werror $(OBJS) -o $(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
