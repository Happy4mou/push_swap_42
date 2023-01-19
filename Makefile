NAME = push_swap
CFILES = ft_atoi.c\
		ft_substr.c\
		ft_isdigit.c\
		ft_putstr.c\
		ft_split.c\
		ft_strdup.c\
		ft_strlen.c\
		f_check.c\
		sort.c\
		ps_utile.c\
		ps_utile2.c\
		ps_utile3.c\
		ps_utile4.c\
		ps_utile5.c\
		operationa.c\
		operationb.c\
		operationab.c\
		getelement.c\
		ft_putnbr.c\
		push_swap.c
NAME1 = checker

CFILESB = bonus/get_next_line.c\
		  bonus/get_next_line_utils.c\
		  bonus/ft_strncmp.c\
		  bonus/operationa_B.c\
		  bonus/operationb_B.c\
		  bonus/operationab_B.c\
		  bonus/checker.c\
		  bonus/ps_utile_B.c\
		  bonus/ps_utile2_B.c\
		  bonus/f_check_B.c\
		  bonus/ft_putstr_b.c\
		  bonus/ft_substr.c\
		  bonus/ft_isdigit.c\
		  bonus/ft_split.c\
		  bonus/ft_strdup.c\
		  bonus/ft_strlen.c\
		  bonus/ft_atoi.c

OBJ = ${CFILES:.c=.o} 
OBJB = ${CFILESB:.c=.o} 
CFLAGS = -Wall -Werror -Wextra 
CC = cc
LI = ar -rc

all : ${NAME}

${NAME} : ${OBJ}
	cc  $(CFLAGS) $(CFILES) -o $(NAME)
bonus : ${NAME1}

${NAME1} : ${OBJB}
	cc  -g $(CFLAGS) $(CFILESB) -o $(NAME1)
clean :
	${RM} ${OBJ} ${OBJB}
fclean : clean 
	${RM} ${NAME} ${NAME1}
re : fclean all