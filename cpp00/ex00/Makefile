NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -fsanitize=address
SRCS = megaphone.cpp

all : $(NAME)
$(NAME): $(SRCS)
	@c++ $(SRCS) $(CFLAGS) -o $(NAME)
	@echo YOU ARE READY TO GO ...!
clean :
	@rm -rf $(NAME)
	@echo CLEAN ...!
fclean : clean
	@echo RESET ...!
re : fclean all