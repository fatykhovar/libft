SRCS =		ft_itoa.c ft_memccpy.c ft_split.c ft_strrchr.c ft_memchr.c ft_strchr.c ft_strtrim.c\
			ft_atoi.c ft_memcmp.c ft_strdup.c ft_substr.c\
			ft_bzero.c ft_memcpy.c ft_strjoin.c ft_tolower.c\
			ft_calloc.c ft_memmove.c ft_strlcat.c ft_toupper.c\
			ft_isalnum.c ft_memset.c ft_strlcpy.c\
			ft_isalpha.c ft_putchar_fd.c ft_strlen.c\
			ft_isascii.c ft_putendl_fd.c ft_strmapi.c\
			ft_isdigit.c ft_putnbr_fd.c ft_strncmp.c\
			ft_isprint.c ft_putstr_fd.c ft_strnstr.c
OBJS =		$(SRCS:.c=.o)
INCS =		libft.h
NAME =		libft.a
GCC =		gcc
ARRC =		ar rc
RLIB =		ranlib
RM =		rm -f
CFLAGS =	-Wall -Wextra -Werror
BONUS = 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c\
			ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJSBONUS = $(BONUS:.c=.o)

.c.o:
			$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(ARRC) $(NAME) $(OBJS)
			$(RLIB) $(NAME)

clean:
			$(RM) $(OBJS) $(OBJSBONUS)
			
fclean:		clean
			$(RM) $(NAME) 

re:			fclean all

bonus:		$(OBJS) $(OBJSBONUS)
			ar rcs $(NAME) $(OBJS) $(OBJSBONUS)
.PHONY:		all clean clean fclean re bonus