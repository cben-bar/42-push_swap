NAME		=	push_swap

CC			=	gcc

LIB_FLAGS	=	libft/libft.a

FLAGS		=	-Wall -Wextra -Werror

HEADER		=	-I includes -I libft

SRCS		=	./push_swap.c						\
				./parsing/error_exit.c				\
				./parsing/check_input.c				\
				./parsing/bool_all_int.c			\
				./parsing/bool_valid_input.c		\
				./parsing/bool_only_perfect_input.c	\
				./parsing/bool_there_is_neg.c		\
				./parsing/bool_check_charset.c		\
				./parsing/bool_no_duplicates.c		\
				./parsing/bool_str_same.c			\
				./parsing/init_data.c				\
				./parsing/init_stack_a.c			\
				./parsing/a_is_sorted.c				\
				./parsing/clear_data.c				\
				./utils/strjoin_space.c				\
				./utils/is_empty_list.c				\
				./utils/ft_atoll.c					\
				./linked_list/new_list.c			\
				./linked_list/lst_clear.c			\
				./utils/transform_char_in_str.c		\
				./utils/list_len.c					\
				./utils/print_int_list.c			\
				./operations/ra.c					\
				./operations/rb.c					\
				./operations/rr.c					\
				./operations/sa.c					\
				./operations/sb.c					\
				./operations/ss.c					\
				./operations/pa.c					\
				./operations/pb.c					\
				./operations/rra.c					\
				./operations/rrb.c					\
				./operations/rrr.c					\
				./sorting/sort_it.c					\
				./sorting/sort_two.c				\
				./sorting/sort_three.c


OBJS		=	${SRCS:.c=.o}

all		:	$(NAME)

.c.o	:
	${CC} ${FLAGS} ${HEADER} -c $< -o ${<:.c=.o}

$(NAME)	:	$(OBJS) ./include/push_swap.h ./libft/libft.h
	make -C libft
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIB_FLAGS)

clean	: 
	make clean -C libft
	rm -rf $(OBJS)

fclean	:	clean
	make fclean -C libft
	rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
