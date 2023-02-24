NAME = violence
CFLAGS = -Wall -Wextra -Werror #-std=c++98 -fsanitize=address
SRCS = HumanB.cpp HumanA.cpp main.cpp Weapon.cpp

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